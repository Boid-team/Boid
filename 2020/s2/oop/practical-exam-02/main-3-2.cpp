#include <iostream>
using namespace std;

extern int *createArray(int);
extern void displayArray(int*, int);
extern bool equalsArray(int*, int*, int);

int main(){
	int *array1 = createArray(5);
	int *array2 = createArray(5);

	cout << equalsArray(array1, array2, 5) << endl;

	delete[] array1;
	delete[] array2;
}