#include <iostream>

extern int transform(int);

int main(){

	int num = 2;

	std::cout << "The number in binary is: " << transform(num) << std::endl;

	return 0;
}