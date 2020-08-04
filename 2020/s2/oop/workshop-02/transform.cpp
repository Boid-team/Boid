#include <iostream>
#include <vector>

int main(){

	int I = 2;

	std::vector<int> vec;

	while(I != 0){
		vec.push_back(I % 2);
		I = I/2;
	}

	for(int i = vec.size()-1; i >= 0; i--){
		std::cout << vec[i];
	}
	
	std::cout << std::endl;

	return 0;
}