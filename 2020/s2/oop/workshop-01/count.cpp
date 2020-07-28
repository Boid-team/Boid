#include <iostream>

int count(int array[],int n){
	int total = 0;
	for(int i = 0; i < n; i++){
	//check if array element is even, and increments count by 1
	//0 is counted as even
		if(array[i] == 0 || array[i] % 2 == 0){
			total = total + 1;
		}
	}
	return total;
}