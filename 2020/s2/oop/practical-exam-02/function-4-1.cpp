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

void printSubArrays(int *numbers, int length){
	for(int i = 0; i < length; i++){
		for(int j = i; j < length; j++){

			cout << "{";

			for(int k = i; k < j + 1; k++){
				cout << *(numbers + k);
				if(k != j){
					cout << ",";
				}
			}

			cout << "}";
			if(j != length - 1){
				cout << ",";
			}

		}
		cout << endl;
	}
}

/*
this is basically just me flailing around throwing code on the wall and seeing what sticks
but it worked eventually so i'm not complaining
*/




