#include <iostream>
using namespace std;

void cpyia(int *ptr, int *newPtr, int length){
	for(int i = 0; i < length; i++){
		*(newPtr+i) = *(ptr + i);
	}
}