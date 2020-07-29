#include <iostream>

extern int count(int[], int, int);

int main(){
	int array[] = {1,1,2,3,4,5};
	std::cout << "Number of elements that are equal to 1: " << count(array,6,1) << std::endl;
	return 0;
}