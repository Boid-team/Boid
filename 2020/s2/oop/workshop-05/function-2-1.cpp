#include <iostream>
using namespace std;

int *readNumbers(){
	int *nums = new int[10];

	int n;

	for(int i = 0; i < 10; i++){
		cin >> n;
		nums[i] = n;
	}
	int *ptr = &nums[0];
	// for(int i = 0; i < 10; i++){

	// 	cout << *(nums + i) << endl;
	// }

	return ptr;
}

void hexDigits(int *numbers, int length){
	for(int i = 0; i < length; i++){
		cout << i << " " << *(numbers + i) << " ";
		switch(*(numbers+i)){
			case 1: 
			case 2:
			case 3:
			case 4:
			case 5:
			case 6:
			case 7:
			case 8:
			case 9: cout << *(numbers + i); break;
			case 10: cout << "A"; break;
			case 11: cout << "B"; break;
			case 12: cout << "C"; break;
			case 13: cout << "D"; break;
			case 14: cout << "E"; break;
			case 15: cout << "F"; break;
		}
		cout << endl;
	}
}