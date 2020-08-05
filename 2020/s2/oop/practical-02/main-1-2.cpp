#include <iostream>

extern int identity(int[10][10]);

int main(){
	int array1[10][10];

	for(int i = 0; i < 10; i++){//populate identity matrix
		for(int j = 0; j < 10; j++){
			if(i == j){
				array1[i][j] = 1;
			}else{
				array1[i][j] = 0;
			}
		}
	}

	int array2[10][10];

	for(int i = 0; i < 10; i++){//populate non-identity matrix
		for(int j = 0; j < 10; j++){
			array2[i][j] = 0;
		}
	}

	std::cout << "Matrix is an identity matrix: " << identity(array2) << std::endl;
}