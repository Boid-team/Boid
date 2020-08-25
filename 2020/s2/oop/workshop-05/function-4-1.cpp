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

void printNumbers(int *numbers, int length){
	for(int i = 0; i < length; i++){
		
		cout << i << " " << *(numbers+i) << endl;

		}

}

int secondSmallestSum(int *numbers, int length){

	int totalNum = 

	for(int i = 0; i < length; i++){
		for(int j = 0; j < length - i; j++){
			
		}
	}

}