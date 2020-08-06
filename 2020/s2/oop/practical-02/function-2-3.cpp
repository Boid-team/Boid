bool is_a_palindrome(int integers[], int length){

	bool isPal = false;
	int n = length;
	int count = 0;

	for(int i = 0; i < n / 2; i++){
		if(integers[i] == integers[n-1-i]){
			count++;
		}
	}
	if(count == n/2){
		isPal = true;
	}

	return isPal;

}

int sum_elements(int integers[], int length){
	
	int sum = 0;

	for(int i = 0; i < length; i++){
		sum += integers[i];
	}

	return sum;
}

int sum_if_a_palindrome(int integers[], int length){

	if(length == 0 || length < 0){
		return -1;
	}

	if(!is_a_palindrome(integers, length)){
		return -2;
	}

	return sum_elements(integers, length);

}