int median(int array[], int n){
	if(n < 1 || n % 2 == 0){
		return 0;
	}

	//sort array in ascending order

	int sorted[n];

	int tempNum;

	for(int i = 0; i < n; i++){//copy array to working array

		sorted[i] = array[i];

	}
	

	for(int i = 0; i < n; i++){
	//sort array by checking if the ith element is smaller
	//than each jth element and swap their positions

		for(int j = i + 1; j < n; j++){
			if(sorted[i] > sorted[j]){
				tempNum = sorted[i];
				sorted[i] = sorted[j];
				sorted[j] = tempNum;
			}
		}
	}

	//return number in the middle;
	return sorted[(n+1)/2];

}