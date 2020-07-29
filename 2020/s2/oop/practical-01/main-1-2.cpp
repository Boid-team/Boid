#include <iostream>
using namespace std;

extern double average(int[], int);

int main(){
	int array1[] = {1,2,3,4,5,6};
	int array2[] = {0,0,0,0};

	double avg = average(array1,6);
	cout << "Average of array: " << avg << endl;

	return 0;
}