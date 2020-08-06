#include <iostream>
#include <string>
using namespace std;

void print_as_binary(string decimal_number){
	int num = stoi(decimal_number);

	std::string result = "";

	while(num != 0){
		result = to_string(num % 2) + result;

		num = num / 2;

	}

	cout << result << endl;

}