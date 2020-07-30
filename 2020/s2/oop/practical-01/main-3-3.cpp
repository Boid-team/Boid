#include <iostream>
using namespace std;

extern double weightedaverage(int[], int);

int main(){
	int array1[] = {1,2,1,4,3,6};	
	int array2[] = {1,1,1,1,1,1};
	int array3[] = {};

	cout << "The weighted average of the array is: " << weightedaverage(array1, 6) << endl;
}