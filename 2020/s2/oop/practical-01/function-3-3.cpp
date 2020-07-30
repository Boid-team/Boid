#include <iostream>

double weightedaverage(int array[], int n){

	if(n < 1){
		return 0;
	}

	int count;

	double wtAvg = 0;

	//sum averages
	for(int i = 0; i < n; i++){
		count = 1;
		for(int j = 0; j < n; j++){//count how many times a number appears in the array
			if(array[i] == array[j] && i != j){
				count++;
			}
		}

		wtAvg += array[i] * (count / (double)n);

	}

	return wtAvg;
}