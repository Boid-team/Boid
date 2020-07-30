double weightedaverage(int array[], int n){

	if(n < 1){
		return 0;
	}

	int count;

	double wtAvg = 0;

	for(int i = 0; i < n; i++){
		count = 1;
		for(int j = 0; j < n; j++){
			if(array[i] == array[j] && i != j){
				count++;
			}
		}

		wtAvg += static_cast<double>((array[i]) * count) / n;

	}

	return wtAvg;
}