#include <iostream>
using namespace std;

extern int binary_to_number(int[], int);

int main(){
	int array1[] = {1,1,1};
	int array2[] = {1,1};

	cout << binary_to_number(array2, 2) << endl;
}