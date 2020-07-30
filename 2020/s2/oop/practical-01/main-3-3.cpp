#include <iostream>
using namespace std;

extern double weightedaverage(int[], int);

int main(){
	int array1[] = {1,2,1,4,3,1};	
	int array2[] = {1,1,1,1,1,1};
	int array3[] = {6,5,4,2,2,4,5,6};

	cout << "The weighted average of the array is: " << weightedaverage(array3, 8) << endl;
}