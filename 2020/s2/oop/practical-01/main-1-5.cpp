#include <iostream>

extern int count_even(int);

int main(){

	//enter input number here
	int number = 10;

	std::cout << "Number of even numbers: " << count_even(number) << std::endl;
	return 0;
}