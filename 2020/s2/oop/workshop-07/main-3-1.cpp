#include <iostream>
using namespace std;

extern int *readNumbers();
extern void printNumbers(int*, int);
extern bool equalsArray(int*, int*,int);

int main(){
	int *array1 = readNumbers();
	int *array2 = readNumbers();
	
	cout << equalsArray(array1, array2, 10) << endl;


	delete[] array1;
	delete[] array2;
}