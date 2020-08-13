#include <math.h>
using namespace std;

int binary_to_number(int digits[], int n){
	int number = 0;
	for(int i = 0; i < n; i++){
		number += pow(2,(n-1-i)) * digits[i];
	}

	return number;
}