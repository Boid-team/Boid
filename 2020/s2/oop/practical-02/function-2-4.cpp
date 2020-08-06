int max_integer(int integers[], int length){

	if(length == 0 || length < 0){
		return -1;
	}

	int max = integers[0];

	for(int i = 1; i < length; i++){
		if(integers[i] > max){
			max = integers[i];
		}
	}

	return max;
}

int min_integer(int integers[], int length){

	if(length == 0 || length < 0){
		return -1;
	}

	int min = integers[0];

	for(int i = 1; i < length; i++){
		if(integers[i] < min){
			min = integers[i];
		}
	}

	return min;
}

int sum_min_and_max(int integers[], int length){
	if(length == 0 || length < 0){
		return -1;
	}

	return min_integer(integers, length) + max_integer(integers,length);
}