#include <iostream>

void passorfail(char grade){
	switch(grade){
		case 'A':
		case 'B':
		case 'C': std::cout << "Pass" << std::endl;
				break;
		case 'D':
		case 'E': std::cout << "Fail" << std::endl;
				break;
		default: std::cout << "Invalid input" << std::endl;
				break;

	}
}