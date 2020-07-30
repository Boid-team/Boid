bool fanarray(int array[], int n){
	
	bool isFan = true;;

	if(n<1){
		isFan = false;
	}

	if(n % 2 == 0){//if number of elements is even

		for(int i = 0; i < n/2;i++){
			if(!(array[i] == array[n-1-i])){
				isFan = false;
			}

	}	

	}else{//if number of elements is odd
		for(int i = 0; i < (n-1) / 2; i++){
			if(!(array[i] == array[n-1-i])){
				isFan = false;
			}
		}
	}

	return isFan;
}