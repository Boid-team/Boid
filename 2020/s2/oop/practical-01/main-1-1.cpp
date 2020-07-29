#include <iostream>

extern int sum_array(int[], int);

int main(){
	int array1[] = {1,2,3,4};
	int array2[] = {};
	std::cout << "sum of array: " << sum_array(array1,4) << std::endl;
	return 0;
}