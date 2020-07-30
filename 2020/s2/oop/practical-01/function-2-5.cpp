bool descending(int array[], int n){
	if(n < 1){
		return false;
	}

	bool dsc = true;

	for(int i = 1; i < n; i++){
		if(array[i] > array[i-1]){
			dsc = false;
		}
	}

	return dsc;
}