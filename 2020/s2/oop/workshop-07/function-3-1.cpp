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

bool equalsArray(int *numbers1, int *numbers2, int length){

	if(length < 1){
		return 0;
	}

	int count = 0;
	for(int i = 0; i < length; i++){
		if(*(numbers1 + i) == *(numbers2 + i)){
			count++;
		}
	}
	if(count == length){
		return 1;
	}else{
		return 0;
	}
}