#include <iostream>
#include <stdlib.h>

extern void passorfail(char);

int main(){

	passorfail('A');
	passorfail('C');
	passorfail('D');
	passorfail('E');
	passorfail('G');
	return 0;

}