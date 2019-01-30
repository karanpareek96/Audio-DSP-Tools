// Header file
#ifndef SIGNALSTATISTICS_H
#define SIGNALSTATISTICS_H

// We need to make a class
class SignalStatistics{
	
private:
	// Cannot be defined using objects
	double *sig_src_arr;
	int sig_length;
	
public:
	
	SignalStatistics(double *_sig_src_arr, int _sig_length);
	
	// Can be defined using objects
	double calc_signal_mean();
	double calc_signal_variance();
	double calc_signal_std();
};
#endif // SIGNALSTATISTICS_H
