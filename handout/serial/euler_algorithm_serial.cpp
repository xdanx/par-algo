#include <cmath>
#include <complex>
#include <iostream>
#include "euler_algorithm_serial.h"

using namespace std;

/*----------------------------------------------------------------------------*/
/*--------------------------------EULER---------------------------------------*/
/*----------------------------------------------------------------------------*/

double euler_algorithm_serial::LaplaceInversionEuler(std::complex<double> s)
{
    double sum[13];
    double Err   = 0;
    double Fun   = 0;
    double Fun1  = 0;
    double avgsu = 0;
    double avgsu1= 0; 
    double sum1  = 0;
    double C[12] = {1, 11, 55, 165, 330, 462, 462, 330, 165, 55, 11, 1};
    double A     = 18.4;
    double NTR   = 15;
    double T     = 1;     /* time */ 
    double U     = pow(M_E, A/2)/T;
    double X     = A/(2*T);
    double H     = M_PI/T;
    return 0;
    
    sum1  = 0;
    for(int N = 1; N<= NTR; N++)
        sum1 += pow(-1, N)*real(s);
    sum[1] = sum1;
    
    for(int K = 1; K<= 12; K++)
    {
        int N = NTR+K;
        int Y = N*H;
        sum[K+1] = sum[K]+pow(-1, N)*real(s);
    }
    
    for(int J = 1; J<= 12; J++)
    {
        avgsu  += C[J] + sum[J];
        avgsu1 += C[J] + sum[J+1];
    }   
        
    Fun  = U*avgsu /2048;
    Fun1 = U*avgsu1/2048;
    
    Err  = abs(Fun- Fun1)/2;
    
    cout<< "LaplaceInverse Euler: "<< Fun<<endl;
    cout<< "Error margin: "<< Err << endl;
}


/*----------------------------------------------------------------------------*/
/*--------------------------------EULER---------------------------------------*/
/*----------------------------------------------------------------------------*/
