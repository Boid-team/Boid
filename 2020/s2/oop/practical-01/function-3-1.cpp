#include <iostream>

bool fanarray(int array[], int n){
	
	bool isPal = false;
	bool isAsc = true;
	bool isDsc = true;
	bool isFan = false;
	int count = 0;


	if(!(n<1)){

		//Checks for palindrome
		for(int i = 0; i < n / 2; i++){
			if(array[i] == array[n-1-i]){
				count++;
			}
		}

		if(count == n/2){
			isPal = true;
		}

		//checks for ascending in first half
		for(int i = 1; i < n/2; i++){
			if(array[i] < array[i-1]){
				isAsc = false;
			}
		}

		//checks for descending in second half
		for(int i = n/2; i < n; i++){
			if(array[i] > array[i-1]){
				isDsc = false;
			}
		}

		if(isPal && isDsc && isAsc){
			isFan = true;
		}

	}

	return isFan;
}