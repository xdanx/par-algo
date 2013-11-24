#include <cmath>
#include <complex>
#include "talbot_algorithm_serial.h"

using namespace std;

/*
 *  coding: utf-8 -*-
 * Talbot suggested that the Bromwich line be deformed into a contour that begins
 * and ends in the left half plane, i.e., z → −∞ at both ends.
 * Due to the exponential factor the integrand decays rapidly
 * on such a contour. In such situations the trapezoidal rule converge
 * extraordinarily rapidly.
 * For example here we compute the inverse transform of F(s) = 1/(s+1) at t = 1
 * 
 * >>> error = Talbot(1,24)-exp(-1)
 * >>> error
 *   (3.3306690738754696e-015+0j)
 *
 * Talbot method is very powerful here we see an error of 3.3e-015
 * with only 24 function evaluations
 *
 * Created by Fernando Damian Nieuwveldt      
 * email:fdnieuwveldt@gmail.com
 * Date : 25 October 2009
 *
 * Reference
 * L.N.Trefethen, J.A.C.Weideman, and T.Schmelzer. Talbot quadratures
 * and rational approximations. BIT. Numerical Mathematics,
 * 46(3):653 670, 2006.
 */


double talbot_algorithm_serial::LaplaceInverseTalbotSerial(std::complex<double> s, int N)
{
    /* Initiate the stepsize */
    double h = 2*M_PI/N;
  
       
    /*  Shift contour to the right in case there is a pole on the positive real 
     * axis : Note the contour will not be optimal since it was originally 
     * devoloped for function with singularities on the negative real axis
     * For example take F(s) = 1/(s-1), it has a pole at s = 1, the contour 
     * needs to be shifted with one unit, i.e shift  = 1. But in the test 
     * example no shifting is necessary
     */ 
        
    double shift = 0.0;
    double ans =   0.0;
    
    if(t == 0)
      cout<< "ERROR:   Inverse transform can not be calculated for t=0";
        exit (1);
        
        
    /*  
     * The for loop is evaluating the Laplace inversion at each point theta 
     * which is based on the trapezoidal rule
     */ 
    for(int k = 0; k <= N; k++)
    {
        double theta = -M_PI + (k+1.0/2)*h;
        double z     = shift + N/t*(0.5017*theta*cotan(0.6407*theta) - 0.6122 + 0.2645j*theta); 
        double dz    = N/t*(-0.5017*0.6407*theta*(cosec(0.6407*theta)**2)+0.5017*cotan(0.6407*theta)+0.2645j);
        ans = ans + exp(z*t)*F(z)*dz;
    }   
    return ((h/(2j*M_PI))*ans).real        
}

double talbot_algorithm_serial::cotan(double x) 
{ 
    return tan(M_PI_2 - x); 
}

double talbot_algorithm_serial::cosec(double x)
{
    return 1.0/sin(x);
}    

