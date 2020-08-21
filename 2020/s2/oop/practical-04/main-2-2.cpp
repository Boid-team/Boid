#include <vector>
#include <iostream>
using namespace std;
extern int maximum_sum(int*, int);

int main(){
	int array[] = {31,-41,59,26,-53,58,97,-93,-23,84};
	int *ptr = &array[0];

	

	cout << maximum_sum(ptr, 10) << endl;
}