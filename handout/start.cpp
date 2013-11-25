#include <iostream>
#include <complex>
#include <cmath>
#include "serial/euler_algorithm_serial.h"
#include "serial/talbot_algorithm_serial.h"

using namespace std;

#include "mystery.h"

const double PI           = 3.141592653589793238462643;      

int test_case=1;
inline void  upperswap(double &u,const double v){if (v>u){u=v;}}

/*
 * The function is supposed to test the correctness of the Laplace Inverse using
 * Talbot's algorithm.
 */
void test_talbot()
{
    double t[100], f_t[100];
    double left = 1, right = 12, h, number_points = 50;
    h = abs(right-left)/(number_points - 1);
    
    cout << "Inverse Laplace (Talbot) starts here" << endl;

    for (int i = 1; i <= number_points; i++)
    {
        f_t[i] = 0;
        t[i] = left + (i-1) * h; 
    }
    
    /* LaplaceInverseTalbotSerial(int n, double shift, int number_points, double *t, double *y); */
    cout<< talbot_algorithm_serial::LaplaceInverseTalbotSerial(50, 0.5, number_points, t, f_t) << endl;

    cout<<endl<<"Talbot's Algorithm points: "<<endl;
    for (int i = 1; i <= number_points; i++) 
    {
        cout.precision(10); 
        cout << t[i]<<"  "; 
    }
    
    
    cout<< endl<< cout<<"Talbot's Algorithm results: " << endl;
    for (int i = 1; i <= number_points; i++) 
    {
        cout.precision(10); 
        cout<< f_t[i]<< " ";
    }
    cout<<endl<<endl;
}

/*
 * The function is supposed to test the correctness of the Laplace Inverse using
 * the EULER algorithm.
 */
void test_euler()
{
    double t[100], f_t[100];
    double left = 1, right = 12, norm, number_points = 50;
    double c = 0.5, n=50, m = 50, A = 22, l = 1;
    norm = abs(right-left)/(number_points - 1);
    
    cout << "Inverse Laplace (Euler) starts here" << endl;

    for (int i = 1; i <= number_points; i++)
    {
        f_t[i] = 0;
        t[i]   = left + (i-1) * norm; 
    }
    
    /* Call order:  c, int n, int m, int l, double A, int number_points, double *t, double *y */
    euler_algorithm_serial::LaplaceInverseEulerSerial(c, n, m, l, A, number_points, t, f_t);

    cout<<endl<<"Euler's Algorithm points: "<<endl;
    cout<<"EulerX = [ ";
    for (int i = 1; i <= number_points; i++) 
    {
        cout.precision(10); 
        cout << t[i]<<"  "; 
    }
    cout<<"] "<<endl;
    
    cout<< endl<< cout<<"Euler's Algorithm results: " << endl;
    cout<<"EulerY = [ ";
    for (int i = 1; i <= number_points; i++) 
    {
        cout.precision(10); 
        cout<< f_t[i]<< " ";
    }
    cout<<"] "<<endl;
}








int main() 
{
  cout << "Welcome, agent(s)! Best of luck." << endl;

  //test_talbot();  
  test_euler();
  
  return 0;
}