#include <iostream>

extern void printer(int[10][10]);

int main(){
	int array1[10][10];

	for(int i = 0; i < 10; i++){
		for(int j = 0; j < 10; j++){
			if(i == j){
				array1[i][j] = (int)1;
			}else{
				array1[i][j] = (int)0;
			}
		}
	}

	printer(array1);

	return 0;
}