#include <iostream>
using std::cout;
using std::endl;

extern bool descending(int[], int);

int main(){
	int array1[] = {10,9,8,7,6,5,4,3,2,1};//decending
	int array2[] = {15,12,14,11,13,10,3,10,5,1};//not decending

	cout << "Array is in decending order: ";

	if(descending(array1,10) == true){
		cout << "True" << endl;
	}else{
		cout << "False"<< endl;
	}
 

	return 0;
}