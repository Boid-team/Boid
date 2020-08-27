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

void bmiIndex(int weight){
	switch(weight){
		case 18: cout << "bit underweight" << endl; break;
		case 24: cout << "Healthy weight!"<< endl; break;
		case 29: cout << "That's overweight."<< endl; break;
		case 39: cout << "Looks like obese"<< endl; break;
		default: cout << "Hmm, is this correct?"<< endl; break;
	}
}