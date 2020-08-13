bool is_a_palindrome(int integers[], int length){
	bool count = true;

	if(length <= 0){
		count = false;
	}

	for(int i = 0; i < length / 2; i++){
		if(integers[i] != integers[length - 1-i]){
			count = false;
		}
	}

	return count;
}

int sum_elements(int integers[], int length){
	int sum = 0;

	if(length <= 0){
		return -1;
	}


	for(int i = 0; i < length; i++){
		sum += integers[i];
	}

	return sum;
}

int sum_if_a_palindrome(int integers[], int length){
	if(!(is_a_palindrome(integers, length))){
		return -2;
	}

	if(length <= 0){
		return -1;
	}

	return sum_elements(integers,length);

}