#ifndef EULER_ALGORITHM_SERIAL_H
#define	EULER_ALGORITHM_SERIAL_H

#include<complex>
#include<cmath>


class euler_algorithm_serial
{
public:
    static double LaplaceInverseEulerSerial(double c, int n,   int m,     int l, 
                                              double A, int anz, double *t, double *y);
};
#endif	/* EULER_ALGORITHM_SERIAL_H */

