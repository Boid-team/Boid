#include <iostream>

extern int count(int[], int);

int main(){
	int array1[5] = {4,5,6,7,8};
	int array2[6] = {0,0,0,0,0,0};
	int array3[1] = {5};
	int array4[10] = {};
	std::cout << "The number is: " << count(array4,10) << std::endl;
	return 0;
}