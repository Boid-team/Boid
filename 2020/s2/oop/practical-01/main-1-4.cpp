#include <iostream>

extern int sumtwo(int[], int[], int);

int main(){
	int array1[] = {1,2,3,4,5};
	int array2[] = {6,7,8,9,10};

	std::cout << "sum of two arrays: " << sumtwo(array1, array2, 5) << std::endl;

	return 0;

}