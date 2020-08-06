#include <math.h>
#include <iostream>
using namespace std;

void count_numbers(int array[4][4]){

	int numbers[10]; //array to handle number count

	for(int i = 0; i < 10; i++){
		numbers[i] = 0;
	}



	for(int i = 0; i < 4; i++){
		for(int j = 0; j < 4; j++){//iterate over each element

			
			int working = array[i][j];

			while(working != 0){//check each digit of input num
				for(int k = 0; k < 10; k++){//
					if(working % 10 == k){
						numbers[k]++;
					}
				}

				working = working / 10;

			}
			
		

		}//end loop
	}

	for(int i = 0; i < 10; i++){//print numbers to console
		cout << i << ":" << numbers[i] << ";";
	}

	cout << endl;


}

int digits(int n){
	return floor(log10(n) + 1);//get digits for argument num
}