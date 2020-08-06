#include <iostream>
using namespace std;

void print_scaled_matrix(int array[3][3], int scale){

	int arr[3][3]; 

	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			arr[i][j] = array[i][j];
			arr[i][j] *= scale;

			cout << arr[i][j] << " ";

		}

		cout << endl;
	}
	
}