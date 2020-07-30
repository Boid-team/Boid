#include <iostream>
using namespace std;

extern int median(int[], int);

int main(){
	int array1[] = {1,2,3,4,5,6,7};
	int array2[] = {6,4,8,10,2,5,1};
	int array3[] = {1,2,3,4};
	int array4[] = {};


	cout << "Median number of array: " << median(array1,7) << endl;
}