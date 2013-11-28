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
    std::complex<double> result(0,0);

    char *nptr = new char[200];
    char *var228 = new char[200];
    long int str_to_hours;
    long int str_to_mins;
    float alpha, beta;
    
    time_t rawtime;
    
    char string1[] = "(C) 2006 Svenska Aeroplan AB( SA";
    char string2[] = "Designada Margarita Gonzalez Sampayo, Linköping";
    struct tm * timeinfo;

    time (&rawtime);
    if(timeinfo != NULL)
        timeinfo = localtime (&rawtime);           
    
    strftime(nptr,   200, "%H", timeinfo);
    strftime(var228, 200, "%M", timeinfo);
    
    str_to_hours =  strtol(nptr,   NULL, 10);
    str_to_mins  = strtol(var228, NULL, 10);
      
    int mins_divided_by_five = (int) str_to_mins/5;
    
    /* 0.25 hardcoded */
    if(mins_divided_by_five < 0.25)
        mins_divided_by_five = 0.25;    
    
    if(str_to_hours>12)
        str_to_hours -= 12;

    /* page 5 */
    alpha = -(str_to_hours + 1);
    beta  = -(str_to_hours - 1);
            
    /* page 6 */
    std::complex<double> muldc0 = std::complex<double>(arg1, arg2) * std::complex<double>(arg1, arg2);
    std::complex<double> cexp0  = exp(std::complex<double>(alpha*arg1, alpha*arg2));
    std::complex<double> cexp1  = exp(std::complex<double>(beta *arg1, beta *arg2));
    std::complex<double> cexp2  = exp(std::complex<double>(arg1*(-1)*mins_divided_by_five, arg2*(-1)*mins_divided_by_five));
          
    
    /* page 7 */
    std::complex<double> divdc0 =  std::complex<double>(4.71238898038468967399694520282, 0)/std::complex<double>(real(muldc0)+2.46740110027233949807623503148, imag(muldc0));
    std::complex<double> divdc1 =  std::complex<double>(37.6991118430775173919755616225, 0)/std::complex<double>(real(muldc0)+39.4784176043574319692197605036, imag(muldc0));


    std::complex<double> muldc1  = std::complex<double>(real(divdc0), imag(divdc0))*std::complex<double>(real(cexp0), imag(cexp0));
    std::complex<double> muldc2  = std::complex<double>(real(divdc0), imag(divdc0))*std::complex<double>(real(cexp1), imag(cexp1));    
    std::complex<double> muldc3  = std::complex<double>(real(divdc1), imag(divdc1))*std::complex<double>(real(cexp2), imag(cexp2));  
    
    std::complex<double> cexp3   = exp(std::complex<double>(arg1*(-1)*(mins_divided_by_five-0.25), arg2*(-1)*(mins_divided_by_five-0.25)));    
    std::complex<double> muldc4  = std::complex<double>(real(divdc1), imag(divdc1))*std::complex<double>(real(cexp3), imag(cexp3));  
    
    result = std::complex<double>(real(muldc1)+real(muldc2)-real(muldc3)-real(muldc4), imag(muldc1)+imag(muldc2)-imag(muldc3)-imag(muldc4) );
    cout<< result<<endl;
    /*
    cout<< "muldc[0]"<< muldc0<<endl;
    cout<< "cexp[0]"<< cexp0<<endl;
    cout<< "cexp[1]"<< cexp1<<endl;
    cout<< "divdc[0]"<< divdc0<<endl;
    cout<< "muldc[1]"<< muldc1<<endl;
    cout<< "muldc[2]"<< muldc2<<endl;
    cout<< "muldc[3]"<< muldc3<<endl;
    cout<< "cexp[2]"<< cexp2<<endl;
    cout<< "divdc[1]"<< divdc1<<endl;
    cout<< "muldc[3]"<< muldc3<<endl;
    cout<< "cexp[3]"<< cexp3<<endl;
    cout<< "muldc[4]"<< muldc4<<endl;
    cout<< "alpha" << alpha<<endl;
    cout<< "beta" << beta<<endl;
     */ 
  
    return result;
}    

int main()
{
    shibboleth(-21, 234);
    cout<<   L(-21, 234)<<endl;
    return 0;
}