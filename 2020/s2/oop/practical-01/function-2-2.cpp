int maximum(int array[], int n){
	if(n < 0){
		return 0;
	}

	int max = array[0];

	for(int i = 1; i < n; i++){
		if(array[i] > max){
			max = array[i];
		}
	}

	return max;
}