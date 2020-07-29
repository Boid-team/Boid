#include <iostream>
using std::cout;
using std::endl;

extern int maximum(int[], int);

int main(){
	int array[] = {5,10,32,1,0,54};

	cout << "Largest number in array: " << maximum(array, 6) << endl;

	return 0;
}