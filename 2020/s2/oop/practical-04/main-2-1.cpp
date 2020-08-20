extern void print_sevens(int*, int);

int main(){
	int array[10] = {5,7,13,14,15,18,21,32,37,42};

	int *ptr = &array[0];

	print_sevens(ptr, 10);

}