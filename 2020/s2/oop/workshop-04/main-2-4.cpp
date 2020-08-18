#include <iostream>
#include <string>
using namespace std;

extern float add_op(float, float);
extern float subtract_op(float, float);
extern float arithmetic_ops(float, float, string);
extern float multiply_op(float,float);
extern float arithmetic_with_ptr(float, float, float (*)(float, float));
int main(){
	cout <<  arithmetic_with_ptr(5,2,&multiply_op) << endl;
}