/*
  Serially and numerically computes the Inverse Laplace Transform using the
  Euler Algorithm as defined in:

  Abate, Joseph, and Ward Whitt.
  "A unified framework for numerically inverting Laplace transforms."
  INFORMS Journal on Computing 18.4 (2006): 408-421.

  http://www.columbia.edu/~ww2040/AbateUnified2006.pdf
*/

#include <array>
#include <cmath>
#include <complex>
#include <iostream>
#include <sstream>
#include <vector>

#include "mystery.h"

using std::cerr;
using std::complex;
using std::cout;
using std::endl;
using std::stringstream;
using std::vector;

const double PI  =3.141592653589793238462;

// Algorithm constant - "a positive integer" (Abate, 2006)
// Division by 2^M is performed, and hence (-M) should not be too close to
// the smallest double exponent so as to avoid underflow.
const int M = 30;


// Create time points in the range [from, to] with the given step size
vector<double> BuildTimePoints(const double from, const double step,
               const double to) {
    vector<double> times;
    std::back_insert_iterator<vector<double>> out(times);

    for (double i = from ; i<= to ; i += step, ++out) {
        *out = i;
    }

    return times;
}


// Convert string to a number.
// Return true on success.
template <typename T>
bool StrToNum (const char* text, T* out) {
    stringstream stream(text);
    T result;
    if (stream >> result) {
        *out = result;
        return true;
    }
    cerr << text << endl;
    return false;
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
    // Get arguments
    double from, step, to;
    if (argc != 4) {
        cerr << "Expected 3 arguments, actual " << argc << endl;
        return 1;
    } else if (!StrToNum(argv[1], &from) || !StrToNum(argv[2], &step) ||
               !StrToNum(argv[3], &to)) {
        cerr << "Arguments must be doubles!" << endl;
        return 1;
    } else if (from > to || step <= 0) {
        cerr << "Arguments do not form a valid time series." << endl;
        return 1;
    }

    /* Generate time series and related info */
    vector<double> Times = BuildTimePoints(from, step, to);
    const int kNumTimes = Times.size();

    /* Build xi array */
    const vector<double> xi = BuildXi(M);
    const int kXiSize = 2*M + 1;

    /* Real part of Beta*/
    const double beta_real = M * log(10) / 3;

    /* Coefficient of summation (for each time series) */
    const double coeff = pow(10, static_cast<double>(M) / 3);


    /* Compute f(t) For each time point 't' */
    double f_ts[kNumTimes];
    double* out = f_ts;

    for (const double t : Times) {
        // Compute sum term
        double sum = 0;
        for (int k = 0; k < kXiSize; ++k) {
            const complex<double> f_result = L(beta_real / t, k * PI / t);
            sum += f_result.real() * pow(-1, k) * xi[k];
        }

        sum = coeff / t * sum;
        *out = sum;
        ++out;
    }

    // Print output - t,f(t)
    for (int t = 0 ; t < kNumTimes ; ++t) {
        cout << Times[t] << "," << f_ts[t] << endl;
    }

    return 0;
}
