#include <iostream>
using namespace std;

extern int sum_if_a_palindrome(int[], int);
extern bool is_a_palindrome(int[], int);
extern int sum_elements(int[], int);

int main(){
	int array1[] = {1,2,2,3,2,2,1};
	int array2[] = {1,2,3,4};
	int array3[] = {3,4,4,3};

	cout << sum_if_a_palindrome(array1,7) << endl;
}