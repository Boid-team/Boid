#include <string>
#include <iostream>
using namespace std;;

extern void copy_2d_strings(string[][2], string[][2], int);

int main(){
	string array1[3][2] = {{"one", "two"},{"three","four"}, {"five","six"}};
	string array2[3][2];
	copy_2d_strings(array1, array2, 3);
}