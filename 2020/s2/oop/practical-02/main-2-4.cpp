#include <iostream>
using namespace std;

extern int sum_min_and_max(int[], int);

int main(){
	int array1[] = {1,2,3,4,5,6,7,8};
	int array2[] = {0,0,0,0};
	int array3[] = {};
	int array4[] = {1,9999};

	cout << sum_min_and_max(array4, 2) << endl;
}