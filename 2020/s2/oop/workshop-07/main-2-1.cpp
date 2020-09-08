extern int *readNumbers();
extern void printNumbers(int*, int);
extern void hexDigits(int*, int);

int main(){
	int *array = readNumbers();

	hexDigits(array, 10);

	delete[] array;
}