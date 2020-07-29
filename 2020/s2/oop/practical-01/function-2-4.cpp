bool ascending(int array[], int n){
	if(n < 1){
		return false;
	}

	bool asc = true;

	for(int i = 1; i < n; i++){
		if(array[i] < array[i-1]){
			asc = false;
		}
	}

	return asc;
}