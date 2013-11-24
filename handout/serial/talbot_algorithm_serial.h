#ifndef TALBOT_ALGORITHM_SERIAL_H
#define	TALBOT_ALGORITHM_SERIAL_H

#include<complex>
#include<cmath>

class talbot_algorithm_serial
{
public: 
    double LaplaceInverseTalbotSerial(std::complex<double> s);
    double cotan(double i);
    double cosec(double i);
        
};

#endif	/* TALBOT_ALGORITHM_SERIAL_H */

