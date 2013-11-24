#include <iostream>
#include <complex>
#include <cmath>
#include "serial/euler_algorithm_serial.h"
#include "serial/talbot_algorithm_serial.h"

using namespace std;

#include "mystery.h"

/*
 * 1. Hints
 * бЫСТрЫЙ       = quickly
 * ИНВертер      = inverter
 * КОМПЛексной   = all-inclusive 
 * функции       = features
 * 
 * 2. 2.3328700E 48.8074800N (Laplace's House? - Paris)
 * 
 * 3. Euler
 *
 * 
 * Other hints:
 * 
 * 
 * Returns: the product of a + ib and c + id 
 * __muldc3(0, 0x1999999999999999, minute, 0, hour) 
 * 
 * Algorithm: function f(t)
 * 
 * getTime()
 * 
 * Functions:
 * 
 * __muldc3(double __a, double __b, double __c, double __d)     : Returns: the product of a + ib and c + id
 * __divdc3(double __a, double __b, double __c, double __d)     : Returns: the quotient of (a + ib) / (c + id)
 * expc(double complex z)                                       : The cexp() family of functions return the complex base-e exponential value. 
 * z = log(a) returns the natural logarithm of a .
 * sincos(float _X, _Out_ float * _S, _Out_ float * _C)         : Calculates sine and cosine value of _X 
 * 
 */

const double PI          =3.141592653589793238462643;      // pi 
const int    MAX_LAPORDER=60;

int test_case=1;
inline void  upperswap(double &u,const double v){if (v>u){u=v;}}


std::complex<double> RazvanLaplaceMystery(double X, double Y)
{
    std::complex<double> result(0, 0);
    std::complex<double> s(X, Y);
    std::complex<double> one(1, 0);
    std::complex<double> two(2, 0);
    std::complex<double> three(3, 0);
    std::complex<double> four(4, 0);
    std::complex<double> six(6, 0);
    std::complex<double> eleven(11, 0);
    std::complex<double> twenty_four(24, 0);
    
    result = (six * exp(-four*s)*(exp(two*s)*(s-one)+s+one)+twenty_four*exp(-eleven*s)*(sinh(s)-s*cosh(s)))/pow(s,three);
    
    return result;
}

void test_talbot()
{
    double t[100], y[100];
    double a0 = 1, b0 = 5, h, m;
    
    std::complex<double> s(11,11);
    cout << "Inverse Laplace starts here" << endl;
    m = 100;
    h = abs(b0-a0)/(m - 1);

    for (int i = 1; i <= m; i++)
    {
        y[i] = 0;
        t[i] = a0 + (i-1) * h; 
    }
    //                                       (std::complex<double> s, int n, double shift, int m, double *t, double *y);
    cout<< talbot_algorithm_serial::LaplaceInverseTalbotSerial(s, 100, 0.1, m, t, y) << endl;

    for (int i = 1; i <= m; i++) 
    {
        cout.precision(32); 
        cout << t[i]<<"  "; 
        cout.precision(32); 
        cout<< y[i]<<endl;
    }

}






int main() 
{
  cout << "Welcome, agent(s)! Best of luck." << endl;
  cout<< L(11, 11)<<endl;
  
  test_talbot();  
  
  
  return 0;
}

