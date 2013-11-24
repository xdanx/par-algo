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

const double PI           = 3.141592653589793238462643;      
const int    MAX_LAPORDER = 60;

int test_case=1;
inline void  upperswap(double &u,const double v){if (v>u){u=v;}}

/*
 * The function is supposed to test the correctness of the Laplace Inverse using
 * Talbot's algorithm.
 */
void test_talbot()
{
    double t[100], y[100];
    double a0 = 0.1, b0 = 15, h, m = 20.0;
    h = abs(b0-a0)/(m - 1);
    
    cout << "Inverse Laplace (Talbot) starts here" << endl;

    for (int i = 1; i <= m; i++)
    {
        y[i] = 0;
        t[i] = a0 + (i-1) * h; 
    }
    
    cout<< talbot_algorithm_serial::LaplaceInverseTalbotSerial(20, 0.01, m, t, y) << endl;

    for (int i = 1; i <= m; i++) 
    {
        cout.precision(10); 
        cout << t[i]<<"  "; 
        cout.precision(10); 
        cout<< y[i]<<endl;
    }
}

/*
 * The function is supposed to test the correctness of the Laplace Inverse using
 * the EULER algorithm.
 */
void test_euler()
{
    double t[100], y[100];
    double a0 = 0.1, b0 = 15, h, m = 20.0;
    h = abs(b0-a0)/(m - 1);
    
    cout << "Inverse Laplace (Euler) starts here" << endl;

    for (int i = 1; i <= m; i++)
    {
        y[i] = 0;
        t[i] = a0 + (i-1) * h; 
    }
    //double c, int n, int m, int l, double A, int anz, double *t, double *y
    cout<< euler_algorithm_serial::LaplaceInverseEulerSerial(0.1, 20, 20, 20, 18.4, 10, t, y) << endl;

    for (int i = 1; i <= m; i++) 
    {
        cout.precision(10); 
        cout << t[i]<<"  "; 
        cout.precision(10); 
        cout<< y[i]<<endl;
    }
}



int main() 
{
  cout << "Welcome, agent(s)! Best of luck." << endl;
  cout<< L(11, 11)<<endl;

  test_talbot();  
  test_euler();

  return 0;
}

