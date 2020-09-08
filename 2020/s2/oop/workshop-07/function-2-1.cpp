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

void hexDigits(int *numbers, int length){
	for(int i = 0; i < length; i++){
		cout << i << " " << *(numbers + i) << " ";
		if(*(numbers + i) < 10){
			cout << *(numbers + i) << endl;
		}else if(*(numbers + i) < 16){
			switch(*(numbers + i)){
				case 10: cout << "A"; break;
				case 11: cout << "B"; break;
				case 12: cout << "C"; break;
				case 13: cout << "D"; break;
				case 14: cout << "E"; break;
				case 15: cout << "F"; break;
			}
			cout << endl;
		}else{
			cout << "Number is NOT in hex!" << endl;
		}
	}
}