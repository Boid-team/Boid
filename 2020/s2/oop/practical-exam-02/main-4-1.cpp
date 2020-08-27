extern int *createArray(int);
extern void displayArray(int*, int);
extern void printSubArrays(int*, int);

int main(){
	int *array = createArray(5);

	printSubArrays(array, 5);

	delete[] array;
}