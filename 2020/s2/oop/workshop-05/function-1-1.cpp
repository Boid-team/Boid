#include <iostream>
using namespace std;

int *readNumbers(){
	int *nums = new int[10];

	int n;

	for(int i = 0; i < 10; i++){
		cout << "Enter number: ";
		cin >> n;
		cout << endl;
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