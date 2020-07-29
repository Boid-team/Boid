#include <iostream>

int count(int array[], int n, int number){
	int num = 0;

	if(n < 1){
		return 0;
	}

	for(int i = 0; i < n; i++){
		if(array[i] == number){
			num++;
		}
	}
	return num;
}