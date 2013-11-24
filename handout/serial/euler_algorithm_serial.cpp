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


double euler_algorithm_serial::LaplaceInverseEulerSerial(double c, int n,   int m,     int l, 
                                                           double A, int anz, double *t, double *y)
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
    for (i = 1; i <= anz; i++) 
    {
        double tx = t[i];
        std::complex<double> zp, zm, zzp, zzm, prodp, prodm, s;
        std::complex<double> sum(0.0,0.0);
        
	zp = L(c + A/(2.0*l*tx),0);
        sum += zp*factor/tx;
	rea[0] = real(sum);
        for (k = 1; k <= n + l*m; k++)
        {
            zp = L(c + A/(2.0*l*tx), k*PI/(l*tx));
            zm = std::complex<double>(real(zp),-imag(zp));
	    zzp = exp(std::complex<double>(0,k*PI/l));
            zzm = std::complex<double>(real(zzp),-imag(zzp));
            prodp = zp*zzp;
            prodm = zm*zzm;
            s = prodp + prodm;

            sum += s*factor/tx;			
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
        for (i = 1; i <= anz; i++) 
            y[i] = exp(c*t[i])*y[i];	
    }
    return 0;
}
/*----------------------------------------------------------------------------*/
/*--------------------------------EULER---------------------------------------*/
/*----------------------------------------------------------------------------*/