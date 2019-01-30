#include "SignalStatistics.h"
#include <cmath>

SignalStatistics::SignalStatistics(double *_sig_src_arr, int _sig_length){
	
	// Here, we say that the variables that the class uses is equal to the variables defined in the .h file
	sig_src_arr = _sig_src_arr;
	sig_length = _sig_length;
}

// Mean Function
double SignalStatistics::calc_signal_mean(){
	
	//initialize the value of mean to 0
	double _mean {0.0};
	
	// sum all the elements of the array using a for loop
	for (int i = 0; i < sig_length; i++){
		_mean += sig_src_arr[i];
	}
	
	// calculate mean
	_mean = _mean / (double)sig_length;
	
	return _mean;
}

// Variance Function
double SignalStatistics::calc_signal_variance(){
	
	double sig_mean = calc_signal_mean();
	//initialize the value of variance to 0
	double _variance {0.0};
	
	// sum all the elements of the array using a for loop
	for (int i = 0; i < sig_length; i++){
		_variance += pow((sig_src_arr[i] - sig_mean),2);
	}
	
	// calculate variance
	_variance = _variance / ((double)sig_length - 1);
	
	return _variance;
}

// Standard Deviation Function
double SignalStatistics::calc_signal_std(){
	
	double sig_var = calc_signal_variance();
	//initialize the value of std to 0
	double _std {0.0};
	
	// calculate standard deviation
	_std = sqrt(sig_var);
	
	return _std;
}