#include <cmath>
#include <complex>
#include<iostream>
#include "talbot_algorithm_serial.h"
#include "../mystery.h"

using namespace std;

const double PI          =3.141592653589793238462643;   
double talbot_algorithm_serial::cotan(double x) 
{ 
    return tan(M_PI_2 - x); 
}

double talbot_algorithm_serial::cosec(double x)
{
    return 1.0/sin(x);
} 

double talbot_algorithm_serial::LaplaceInverseTalbotSerial(std::complex<double> s, int n, double shift, int m, double *t, double *y)
{
	complex <double> ans, z, dz, res, aux;
	double theta, h;
	int i, k;

	if (n < 1) return 2;
	if (m < 1) return 3;

        h = 2*PI/n;
  
	for (i = 1; i <= m; i++)
	{
		double tt;
		if (t[i] == 0) 
                    return 1;
                
		tt = t[i];
		ans = complex<double>(0,0);
		for (k = 0; k <= n; k++) 
		{
                    theta = -PI + (k + 0.5)*h;
                    z     = shift + n/tt * (0.5017 * theta * cotan(0.6407*theta) - 0.6122 + complex<double>(0,0.2645*theta)); 
                    dz    = n/tt*(-0.5017*0.6407*theta*(pow(cosec(0.6407*theta),2)) + 0.5017*cotan(0.6407*theta) + complex<double>(0,0.2645));
                    ans   = ans + exp(z*tt) * L(z.real(), z.imag()) * dz;
		}
    
		res = h/(complex<double>(0,2*PI))*ans;
		y[i] = real(res);

	}

	return 0;
}

