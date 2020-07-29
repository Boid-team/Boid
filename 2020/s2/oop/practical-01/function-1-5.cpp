#include <iostream>

int count_even(int number){
	
	if(number < 1){
		return 0;
	}

	int count = 0;

	for(int i = 1; i <= number; i++){
		if(i % 2 == 0){//if i mod 2 is 0, then i is divisible by 2, i.e. even
			count++;
		}
	}

	return count;
}