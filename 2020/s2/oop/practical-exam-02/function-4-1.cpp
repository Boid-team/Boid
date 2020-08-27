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
			cout << "{" << *(numbers + j) << "}";
			if(j != length - 1){
				cout << ",";
			}

		}
		cout << endl;
	}
}

/*
i = 0:
0    1      2
{0}, {0,1},{0,1,2}

i = 1:
1    2
{1},{1,2}

i = 2:
2
{2}
*/




