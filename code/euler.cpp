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
#include "mystery.h"

const double PI  =3.141592653589793238462;

// Algorithm constant - "a positive integer" (Abate, 2006)
// Division by 2^M is performed, and hence (-M) should not be too close to
// the smallest double exponent so as to avoid underflow.
const int M = 50;

// Time points at which to evaluate f(t)
const double Times[] = {0.1,0.3,0.5,0.7,0.9,1.1,1.3,1.5,1.7,1.9,2.1,2.3,2.5,2.7,2.9,3.1,3.3,3.5,3.7,3.9,4.1,4.3,4.5,4.7,4.9,5.1,5.3,5.5,5.7,5.9,6.1,6.3,6.5,6.7,6.9,7.1,7.3,7.5,7.7,7.9,8.1,8.3,8.5,8.7,8.9,9.1,9.3,9.5,9.7,9.9,10.1,10.3,10.5,10.7,10.9,11.1,11.3,11.5,11.7,11.9,12.1};
const int NumTimes = sizeof(Times) / sizeof(*Times);

// Compute n! / ( r! (n-r)! ) using log-gamma function
// See: http://en.wikipedia.org/wiki/Gamma_function
long choose(const int n, const int r) {
	const double comb = exp(lgamma(n+1) - lgamma(r+1) - lgamma(n-r+1));

	// Round to nearest integer
	return static_cast<long>(comb + 0.5);
}


// Computes an array of size M, with each element k equal to:
// (M choose k) / (2 ^ M)
//
// 'last_out' is an output iterator to the last element in the array.
void binomDiv2PowM(const int M, double* last_out) {
	double prev_value = 0;
	for (int k=0 ; k < M ; ++k, --last_out) {
		// Compute (M choose K) * 2^-M
		const double v = ldexp(choose(M, k), -M);
		prev_value = prev_value + v;
		*last_out = prev_value;
	}
}



int main(int argc, char const *argv[]) {

	/* Build xi array */
	const int SIZE = 2*M + 1;
	double xi[SIZE];

	// 0th element = 1/2
	xi[0] = 0.5;

	// Elements 1 to M = 1
	std::fill(&xi[1], &xi[M+1], 1.0);

	// Elements M+1 to 2M = ...
	double* const last_elem = xi + SIZE - 1;
	binomDiv2PowM(M, last_elem);


	/* Real part of Beta*/
	const double beta_real = M * log(10) / 3;


	/* Coefficient of summation (for each time series) */
	const double coeff = pow(10, static_cast<double>(M) / 3);



	/* Compute f(t) For each time point 't' */
	double f_ts[NumTimes];
	double* out = f_ts;

	for (const double t : Times) {
		// Compute sum term
		double sum = 0;
		for (int k = 0; k < SIZE; ++k) {
			const std::complex<double> f_result = L(beta_real / t, k * PI / t);
			sum += f_result.real() * pow(-1, k) * xi[k];
		}

		sum = coeff / t * sum;
		*out = sum;
		++out;
	}


	// Output t,f(t)
	for (int t = 0 ; t < NumTimes ; ++t) {
		std::cout << Times[t] << "," << f_ts[t] << std::endl;
	}

	return 0;
}
