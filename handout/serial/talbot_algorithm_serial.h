#ifndef TALBOT_ALGORITHM_SERIAL_H
#define	TALBOT_ALGORITHM_SERIAL_H

#include<complex>
#include<cmath>

class talbot_algorithm_serial
{
public: 
    static double LaplaceInverseTalbotSerial(std::complex<double> s, int n, double shift, int m, double *t, double *y);
    static double cotan(double i);
    static double cosec(double i);
        
};

#endif	/* TALBOT_ALGORITHM_SERIAL_H */

