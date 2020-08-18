#include <iostream>
#include <string>
using namespace std;

extern float add_op(float, float);
extern float subtract_op(float, float);
extern float arithmetic_ops(float, float, string);

int main(){
	cout << arithmetic_ops(5,2,(string)"-") << endl;
}