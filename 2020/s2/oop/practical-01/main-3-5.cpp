#include <iostream>
using std::cout;
using std::endl;

extern double sumeven(double[], int);

int main(){
	double array1[] = {1.5,2.5,3.5,4.5,5.5,6.1};

	cout << "Sum of even elements in array: " << sumeven(array1, 6) << endl;
}