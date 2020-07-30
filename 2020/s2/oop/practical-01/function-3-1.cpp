#include <iostream>

bool fanarray(int array[], int n){
	
	bool isFan = false;
	int count = 0;


	if(!(n<1)){

		for(int i = 0; i < n / 2; i++){
			if(array[i] == array[n-1-i]){
				count++;
			}
		}

		if(count == n/2){
			isFan = true;
		}

	}

	return isFan;
}