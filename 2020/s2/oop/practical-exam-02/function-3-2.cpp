#include <iostream>
using namespace std;


int *createArray(int n){
	int element;
	int *ptr = new int[n];

	for(int i = 0; i < n; i++){
		cin >> element;
		*(ptr + i) = element;

	}

	return ptr;

}

void displayArray(int *numbers, int length){
	for(int i = 0; i < length; i++){
		cout << i << " " << *(numbers + i) << endl;
	}
}

bool equalsArray(int *A, int *B, int length){
	int count = 0;
	for(int i = 0; i < length; i++){
		if(*(A+i) == *(B+i)){
			count++;
		}
	}
	if(count == length){
		return true;
	}else{
		return false;
	}
}