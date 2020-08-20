#include <iostream>
using namespace std;

extern void cpyia(int[], int[], int);

int main(){
	int array[] = {1,2,3,4,5};
	int *ptr = &array[0];
	int *newPtr = new int[5];

	cpyia(ptr,newPtr,5);

}