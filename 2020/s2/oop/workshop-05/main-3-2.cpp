#include <iostream>
using namespace std;

extern int *readNumbers();
extern void printNumbers(int*, int);
extern bool equalsArray(int*, int*, int);
extern int *reverseArray(int*, int);

int main(){
	
	int *array1 = readNumbers();


	cout <<  equalsArray(array1, reverseArray(array1, 10), 10) << endl;



	delete[] array1;
}