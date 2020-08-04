#include <iostream>
#include <vector>
#include <math.h>

int transform(int n){

	int I = n;
	int num = 0;

	std::vector<int> vec;

	while(I != 0){
		vec.push_back(I % 2);
		I = I/2;
	}


	for(int i = 0; i < vec.size(); i++){
		num += vec[i] * pow(10,vec.size() -1 - i);
	}

	return num;
}