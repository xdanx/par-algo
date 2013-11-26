/*
  Numerically computes the Inverse Laplace Transform using the Euler Algorithm
  as defined in:

  Abate, Joseph, and Ward Whitt.
  "A unified framework for numerically inverting Laplace transforms."
  INFORMS Journal on Computing 18.4 (2006): 408-421.

  http://www.columbia.edu/~ww2040/AbateUnified2006.pdf
*/

#include <array>
#include <cmath>
#include <complex>
#include <iostream>
#include <mpi.h>
#include <vector>
  
#include "mystery.h"


using std::vector;


const double PI  =3.141592653589793238462;

// Algorithm constant - "a positive integer" (Abate, 2006)
// Division by 2^M is performed, and hence (-M) should not be too close to
// the smallest double exponent so as to avoid underflow.
const int M = 30;

// Time points at which to evaluate f(t)
double Times[] = {0.1,0.3,0.5,0.7,0.9,1.1,1.3,1.5,1.7,1.9,2.1,2.3,2.5,2.7,2.9,3.1,3.3,3.5,3.7,3.9,4.1,4.3,4.5,4.7,4.9,5.1,5.3,5.5,5.7,5.9,6.1,6.3,6.5,6.7,6.9,7.1,7.3,7.5,7.7,7.9,8.1,8.3,8.5,8.7,8.9,9.1,9.3,9.5,9.7,9.9,10.1,10.3,10.5,10.7,10.9,11.1,11.3,11.5,11.7,11.9,12.1};
const int kNumTimes = sizeof(Times) / sizeof(*Times);


// Check result or die 
void CHECK(const int result) {
  if (result != MPI_SUCCESS) {
    std::cerr << "An MPI operation failed" << std::endl;
    exit(1);
  }
}

// Compute n! / ( r! (n-r)! ) using log-gamma function
// See: http://en.wikipedia.org/wiki/Gamma_function
long choose(const int n, const int r) {
    const double comb = exp(lgamma(n+1) - lgamma(r+1) - lgamma(n-r+1));

    // Round to nearest integer
    return static_cast<long>(comb + 0.5);
}


// Computes M values, with the kth value equal to (M choose k) / (2 ^ M)
//
// 'out' is an output iterator to which the values are written, for k = 0 to M-1
template <class Iter>
void binomDiv2PowM(const int M, Iter out) {
    double prev_value = 0;
    for (int k = 0 ; k < M ; ++k, ++out) {
        // Compute (M choose K) * 2^-M
        const double v = ldexp(choose(M, k), -M);
        prev_value = prev_value + v;
        *out = prev_value;
    }
}


/* Build xi array */
const vector<double> BuildXi(const int M) {
    const int kXiSize = 2*M + 1;
    vector<double> xi(kXiSize);

    // 0th element = 1/2
    xi[0] = 0.5;

    // Elements 1 to M = 1
    std::fill(&xi[1], &xi[M+1], 1.0);

    // Elements M+1 to 2M = ...
    const vector<double>::reverse_iterator last_elem = xi.rbegin();
    binomDiv2PowM(M, last_elem);

    return xi;
}


int main(int argc, char *argv[]) {
    // Initialise MPI
    if (MPI_Init(&argc,&argv) != MPI_SUCCESS) {
        std::cerr << "MPI init failed" << std::endl;
        return 1;
    }

    // Determine MPI Constants
    const int kRootRank = 0;
    int kMyRank;
    MPI_Comm_rank(MPI_COMM_WORLD, &kMyRank);

    int kNumProcs;
    MPI_Comm_size(MPI_COMM_WORLD, &kNumProcs);


    /* Scatter 'Times' across processors */

    // Base number of time points scattered per processor
    const int kBaseTimesPerProc = kNumTimes / kNumProcs;


    /* Set base counts per processor */
    int sendcnts[kNumProcs];
    for (int& count : sendcnts) {
        count = kBaseTimesPerProc;
    }

    // Allocate overflown elements (if time points do not divide evenly)
    const int kNumOverflownTimes = kNumTimes % kNumProcs;
    for (int i = 0; i < kNumOverflownTimes; ++i) {
        ++sendcnts[i];
    }


    /* Set displacements per processor */
    int displs[kNumProcs];
    int current_displ = 0;
    for (int i = 0 ; i < kNumProcs ; ++i) {
        displs[i] = current_displ;
        current_displ += sendcnts[i];
    }


    /* Receive buffer - accomodating up to 1 extra element*/
    const int kNumLocalTimes = kBaseTimesPerProc + (kMyRank < kNumOverflownTimes ? 1 : 0);
    double localTimes[kNumLocalTimes];

    CHECK(MPI_Scatterv(Times, sendcnts, displs, MPI_DOUBLE,
                       localTimes, kNumLocalTimes, MPI_DOUBLE,
                       kRootRank, MPI_COMM_WORLD));

    /* Build xi array */
    const vector<double> xi = BuildXi(M);
    const int kXiSize = 2*M + 1;

    /* Real part of Beta*/
    const double beta_real = M * log(10) / 3;

    /* Coefficient of summation (for each time series) */
    const double coeff = pow(10, static_cast<double>(M) / 3);


    /* Compute f(t) For each time point 't' */
    double local_f_ts[kNumLocalTimes];
    double* out = local_f_ts;

    for (const double t : localTimes) {
        // Compute sum term
        double sum = 0;
        for (int k = 0; k < kXiSize; ++k) {
            const std::complex<double> f_result = L(beta_real / t, k * PI / t);
            sum += f_result.real() * pow(-1, k) * xi[k];
        }

        sum = coeff / t * sum;
        *out = sum;
        ++out;
    }


    //// ROOOOOOOOOOOOOOOOT
    double f_ts[kNumTimes];

    CHECK(MPI_Gatherv(local_f_ts, kNumLocalTimes, MPI_DOUBLE,
                      f_ts, sendcnts, displs, MPI_DOUBLE,
                      kRootRank, MPI_COMM_WORLD));


    // ROOOOOOOOOOOOOOOOT
    if (kMyRank == kRootRank) {
        // Output t,f(t)
        for (int t = 0 ; t < kNumTimes ; ++t) {
            std::cout << Times[t] << "," << f_ts[t] << std::endl;
        }
    }

    return 0;
}
