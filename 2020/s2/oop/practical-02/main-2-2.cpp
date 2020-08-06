#include <iostream>
using namespace std;

extern int binary_to_number(int[], int);

int main(){
	int bin1[] = {1,0,0,1,1,0,1,0,1}; //9 digits
	int bin2[] = {1,0,1,0};//4 digits

	cout << binary_to_number(bin1, 9) << endl;

	return 0;
}