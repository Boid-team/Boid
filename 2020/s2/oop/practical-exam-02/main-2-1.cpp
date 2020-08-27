extern int *createArray(int);
extern void displayArray(int*, int);
extern void bmiIndex(int);

int main(){
	int *array = createArray(5);

	for(int i = 0; i < 5; i++){
		bmiIndex(*(array + i));
	}

	delete[] array;
}