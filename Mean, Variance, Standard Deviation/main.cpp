#include <iostream>
#include <cmath>
#include "SignalStatistics.h"


// importing the waveforms.cpp file
extern double InputSignal_f32_1kHz_15kHz[320];
using namespace std;

int main(){
	
	double mean;
	double variance;
	double std;
	
	// Calling an instance of the class
	SignalStatistics *testSignal = new SignalStatistics(&InputSignal_f32_1kHz_15kHz[0],320);
	
	mean = testSignal -> calc_signal_mean();
	variance = testSignal -> calc_signal_variance();
	std = testSignal -> calc_signal_std();
	
	cout << "Mean is " << mean << endl;
	cout << "Variance is " << variance << endl;
	cout << "Standard Deviation is " << std << endl;
	
	return 0;
	}
