extern int *createArray(int);
extern void displayArray(int*, int);

int main(){
	int *array = createArray(4);

	displayArray(array, 4);

	delete[] array;
}