#include <array>
#include <cmath>
#include <complex>
#include <iostream>
#include <sstream>
#include <vector>

#include "mystery.h"

using std::cerr;
using std::complex;
using std::cout;
using std::endl;
using std::stringstream;
using std::vector;

const double PI = 3.141592653589793238462;
const double  a = 0.25;
const int     M = 200;
const int     q = 12;


// Create time points in the range [from, to] with the given step size
vector<double> BuildTimePoints(const double from, const double step,
               const double to) {
    vector<double> times;
    std::back_insert_iterator<vector<double>> out(times);

    for (double i = from ; i<= to ; i += step, ++out) {
        *out = i;
    }

    return times;
}

// Convert string to a number.
// Return true on success.
template <typename T>
bool StrToNum (const char* text, T* out) {
    stringstream stream(text);
    T result;
    if (stream >> result) {
        *out = result;
        return true;
    }
    cerr << text << endl;
    return false;
}


/* 
 * The Abate-Dubner algorithm for inverting Laplace transforms. 
 */
int main(int argc, char *argv[]) 
{
    // Get arguments
    double from, step, to;
    if (argc != 4) 
    {
        cerr << "Expected 3 arguments, actual " << argc << endl;
        return 1;
    } 
    else 
        if (!StrToNum(argv[1], &from) || !StrToNum(argv[2], &step) ||
               !StrToNum(argv[3], &to)) 
        {
            cerr << "Arguments must be doubles!" << endl;
            return 1;
        } 
        else 
        {
            if (from > to || step <= 0) 
            {
                cerr << "Arguments do not form a valid time series." << endl;
                return 1;
            }
            if(step > 0.05)
                step = 0.05;
        }
    /* Generate time series t[i] and related f_ts[i]. */
    vector<double> Times = BuildTimePoints(from, step, to);
    const int kNumTimes = Times.size();
    double f_ts[kNumTimes];
    double* out = f_ts;    
    


    /* Declarations and initializations of the parameters used by algorithm. */
    double reals[kNumTimes+1];
    double imags[kNumTimes+1];

    for (int i = 0; i <= kNumTimes; i++) 
    {
        std::complex<double> z = L(a, i*PI/q);
	reals[i] = real(z);
        imags[i] = imag(z);
    }
    
    for (const double t : Times) 
    {
        double result = 0;
        double factor = exp(a*t)/q;
	double sum    = 0;
        
        for (int j = 1; j <= M; j++) 
            sum += reals[j] * cos(j*PI/q*t) - imags[j]*sin(j*PI/q*t);

        result = factor*(sum + reals[0]/2);
	if (t == 0) 
           result *= 2;  
        *out = result;
        ++out;
    }    

    // Print output - t,f(t)
    for (int t = 0 ; t < kNumTimes ; ++t) {
        cout << Times[t] << "," << f_ts[t] << endl;
    }

    return 0;
}
