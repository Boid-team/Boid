#include <iostream>
using std::cout;
using std::endl;

extern int minimum(int[], int);

int main(){

	int array[] = {10,4,2,15,9,4};

	cout << "Smallest number in array:" << minimum(array,6) << endl;

	return 0;

}