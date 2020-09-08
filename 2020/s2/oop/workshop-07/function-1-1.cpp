#include <iostream>
using namespace std;

int *readNumbers(){
	int *array = new int[10];
	int n;
	for(int i = 0; i < 10; i++){
		cin >> n;
		*(array + i) = n;
	}

	return array;
}

void printNumbers(int *numbers, int length){
	for(int i = 0; i < length; i++){
		cout << i << " " << *(numbers + i) << endl;
	}
}