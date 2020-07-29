#include <iostream>

double average(int array[], int n){
	int sum = 0;
	for(int i = 0; i < n; i++){
		sum += array[i];
	}
	double avg = static_cast<double>(sum) / n;
	return avg;
}