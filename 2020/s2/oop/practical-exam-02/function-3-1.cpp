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

int winningPowerBall(int *nums, int length){
	int sum = 0;
	for(int i = 0; i < length; i++){
		if(i == 0 | i % 2 == 0){
			sum += 2* ( *(nums+i));
		}else{
			sum += *(nums+i);
		}
	}
	return sum;
}