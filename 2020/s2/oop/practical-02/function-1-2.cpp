int identity(int array[10][10]){

	int diag_count = 0;

	for(int i = 0; i < 10; i++){
		if(array[i][i] == 1){
			diag_count++;
		}
	}

	int zeroes = 0;

	for(int i = 0; i < 10; i++){
		for(int j = 0; j < 10; j++){
			if(i != j){
				if(array[i][j] == 0){
					zeroes++;
				}
			}
		}
	}

	if(diag_count == 10 && zeroes == 90){
		return 1;
	} else{
		return 0;
	}



}