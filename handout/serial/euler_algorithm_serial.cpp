#include <cmath>
#include <complex>
#include <iostream>
#include "euler_algorithm_serial.h"
#include "../mystery.h"

using namespace std;
/*----------------------------------------------------------------------------*/
/*--------------------------------EULER---------------------------------------*/
/*----------------------------------------------------------------------------*/
const double PI = 3.141592653589793238462643;  

/* The following method computes the coefficients of a binomial expansion. */
double binomial_coefficients(int n, int k)
{
    int i;
    double result;

    if (k < 0 || k > n) 
       return 0.0;

    if (k == 0 || k == n) 
       return 1.0;

    if (2*k > n) 
       result = binomial_coefficients(n, n-k);
    else 
    { 
       result = (double) n-k+1;
       for (i = 2; i <= k; i++) 
       {
           result = result*(double)(n - k + i);
           result = result/(double)i;
       }
    }
    return result;
}


/* 
 *  Usage :
 *  [left  t[1]  t[2]  t[3] .......       t[n-1]  right] 
 *  left  = the starting point of the interval
 *  right = the end point of the interval
 *  
 *  Parameters meaning:
 *   
 *  c     = the exponential  order of the function
 *  n     = n, in the summation formula...
 *  m     = the exponent of the binomial: (e.g. (x1+x2)^m )
 *  l     = must equal 1!!!!
 *  A     = Parameter of the algorithm (22 is standard - Oh Baby...)
 *  number_points = # of points of t
 *  t     = the array of points where we want to evaluate f
 *  f_t   = the array of f(t)
 */ 
double euler_algorithm_serial::LaplaceInverseEulerSerial(double c, int n,   int m,     int l, 
                                                           double A, int number_points, double *t, double *y)
{
    double binomial_coefficients(int n, int k);
    int i, j, k;
    double factor, quot;
    double binomial[m];
    double rea[n + l*m];
    double reb[n];
	
    /* compute binomial coefficients */
    if (m > 0) 
        for (i = 0; i <= m; i++)
            binomial[i] = binomial_coefficients(m, i);

    factor = exp(A/(2*l))/(2*l);
    quot   = pow(2.0, m);
    
    /* Loop over all eval. points t[i] */
    for (i = 1; i <= number_points; i++) 
    {
        double current_point = t[i];
        std::complex<double> zp, zm, zzp, zzm, prodp, prodm, s;
        std::complex<double> sum(0.0,0.0);
        
	zp     = L(c + A/(2.0*l*current_point),0);
        sum   += zp*factor/current_point;
	rea[0] = real(sum);
        for (k = 1; k <= n + l*m; k++)
        {
            zp = L(c + A/(2.0*l*current_point), k*PI/(l*current_point));
            zm = std::complex<double>(real(zp),-imag(zp));
	    zzp = exp(std::complex<double>(0,k*PI/l));
            zzm = std::complex<double>(real(zzp),-imag(zzp));
            prodp = zp*zzp;
            prodm = zm*zzm;
            s = prodp + prodm;

            sum += s*factor/current_point;			
            rea[k] = real(sum);
	}
        y[i] = rea[n];		
		
	/* compute Euler summation */
        for (k = 0; k <= n; k++) 
        {
            double sum = 0.0;
            for (j = 0; j <= m; j++)
                sum += rea[k + l*j]*binomial[j];
            reb[k] = sum/quot; 
	}
        y[i] = reb[m];
    }


    /* correct exponential order */
    if (c != 0.0) 
    {
        for (i = 1; i <= number_points; i++) 
            y[i] = exp(c*t[i])*y[i];	
    }
    return 0;
}
/*----------------------------------------------------------------------------*/
/*--------------------------------EULER---------------------------------------*/
/*----------------------------------------------------------------------------*/