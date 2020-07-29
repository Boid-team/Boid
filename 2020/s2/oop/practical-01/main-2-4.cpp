#include <iostream>
using std::cout;
using std::endl;

extern bool ascending(int[], int);

int main(){
	int array1[] = {1,2,3,4,5,6,7,8,9,10};//ascending
	int array2[] = {1,2,3,4,3,4,5,6,7,8};//not ascending

	cout << "Array is in ascending order: ";

	if(ascending(array1,10) == true){
		cout << "True" << endl;
	}else{
		cout << "False"<< endl;
	}
 

	return 0;
}