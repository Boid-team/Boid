#include <iostream>
using std::cout;
using std::endl;

extern bool fanarray(int[], int);

int main(){

	int array1[7] = {1,3,2,5,2,3,1}; //odd length, is fan
	int array2[6] = {2,4,6,6,4,2};//even length, is fan
	int array3[5] = {1,3,4,4,1};//odd length, not fan
	int array4[4] = {2,4,6,8};//even length, not fan
	int array5[3] = {};//empty array

	if(fanarray(array2, 6)){
		cout << "Input array is a fan: True" << endl;
	}else{
		cout << "Input array is a fan: False" << endl;
	}


}