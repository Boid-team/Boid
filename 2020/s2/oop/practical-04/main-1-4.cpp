#include <iostream>
using namespace std;

extern void cpyda(double*, double*, int);

int main(){
	double array1[5] = {1.1,2.2,3.3,4.4,5.5};
	double *OldPtr = &array1[0];

	double *newPtr = new double[5];

	cpyda(OldPtr, newPtr, 5);


}
