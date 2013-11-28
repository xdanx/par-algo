#include <cmath>
#include <complex>
#include <iostream>
#include <cstdlib>
#include "euler_algorithm_serial.h"
#include "../mystery.h"

using namespace std;

/*
 * Possible implementation of mystery.o. Dan's work!
 */
std::complex<double> shibboleth(double arg1, double arg2)
{
    char *nptr = new char[200];
    char *var228 = new char[200];
    long int str_to_hours;
    long int str_to_mins;
    float alpha, beta;
    
    time_t rawtime;
    
    char string1[] = "(C) 2006 Svenska Aeroplan AB( SA";
    char string2[] = "Designada Margarita Gonzalez Sampayo, Linköping";
    static struct tm * timeinfo = NULL;

    time (&rawtime);
    if(timeinfo == NULL)
        timeinfo = localtime (&rawtime);           
    
    strftime(nptr,   200, "%H", timeinfo);
    strftime(var228, 200, "%M", timeinfo);
    
    str_to_hours =  strtol(nptr,   NULL, 10);
    str_to_mins  = strtol(var228, NULL, 10);
      
    int mins_divided_by_five = (int) str_to_mins/5;
    
    /* 0.25 hardcoded */
    if(mins_divided_by_five < 0.25)
        mins_divided_by_five = 0.25;    

    if (str_to_hours >= 12) str_to_hours -= 12;

    if(str_to_hours == 0) {
        alpha = -13;
        beta = -11;
    } else {
      /* page 5 */
      alpha = -(str_to_hours + 1);
      beta  = -(str_to_hours - 1);
    }
            
    /* page 6 */
    std::complex<double> muldc0 = std::complex<double>(arg1, arg2) * std::complex<double>(arg1, arg2);
    std::complex<double> cexp0  = exp(std::complex<double>(alpha*arg1, alpha*arg2));
    std::complex<double> cexp1  = exp(std::complex<double>(beta *arg1, beta *arg2));
    std::complex<double> cexp2  = exp(std::complex<double>(arg1*(-1)*(mins_divided_by_five+0.25), arg2*(-1)*(mins_divided_by_five+0.25)));
          
    
    /* page 7 */
    std::complex<double> divdc0 =  std::complex<double>(4.71238898038468967399694520282, 0)/std::complex<double>(real(muldc0)+2.46740110027233949807623503148, imag(muldc0));
    std::complex<double> divdc1 =  std::complex<double>(37.6991118430775173919755616225, 0)/std::complex<double>(real(muldc0)+39.4784176043574319692197605036, imag(muldc0));


    std::complex<double> muldc1  = std::complex<double>(real(divdc0), imag(divdc0))*std::complex<double>(real(cexp0), imag(cexp0));
    std::complex<double> muldc2  = std::complex<double>(real(divdc0), imag(divdc0))*std::complex<double>(real(cexp1), imag(cexp1));    
    std::complex<double> muldc3  = std::complex<double>(real(divdc1), imag(divdc1))*std::complex<double>(real(cexp2), imag(cexp2));  
    
    std::complex<double> cexp3   = exp(std::complex<double>(arg1*(-1)*(mins_divided_by_five-0.25), arg2*(-1)*(mins_divided_by_five-0.25)));    
    std::complex<double> muldc4  = std::complex<double>(real(divdc1), imag(divdc1))*std::complex<double>(real(cexp3), imag(cexp3));  
    
    std::complex<double>  result = std::complex<double>(real(muldc1)+real(muldc2)-real(muldc3)-real(muldc4), imag(muldc1)+imag(muldc2)-imag(muldc3)-imag(muldc4) );
  
    return result;
}    

int main()
{
    cout<< shibboleth(1.23, -10)<<endl;
    cout<<          L(1.23, -10)<<endl;
    return 0;
}
