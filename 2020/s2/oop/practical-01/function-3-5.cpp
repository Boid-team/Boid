double sumeven(double array[], int n){
	//this function counts the elements in the 2nd, 4th etc
	//position, which corresponds to array pointer
	//array[1], array[3] etc.

	if(n < 0){
		return 0;
	}

	double sum = 0;

	for(int i = 0; i < n; i++){
		if(i%2 == 1){
			sum += array[i];
		}
	}

	return sum;
}