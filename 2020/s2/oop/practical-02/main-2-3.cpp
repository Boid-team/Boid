#include <iostream>
using namespace std;

extern int sum_if_a_palindrome(int[], int);

int main(){

	int array1[] = {1,2,2,1};//length 4
	int array2[] = {1,2,3,4,5,6,7,8};//length 8
	int array3[] = {};//length 0
	int array4[] = {1,2,4,5,4,2,1};//length 7

	cout << sum_if_a_palindrome(array4,7) << endl;

	return 0;
}