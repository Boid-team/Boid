#include <string>
using namespace std;

float add_op(float left, float right){

	return left + right;
}
float subtract_op(float left, float right){
	return left - right;
}

float multiply_op(float left, float right){
	return left * right;
}

float arithmetic_ops(float left, float right, string op){
	switch(op[0]){
		case '+': return add_op(left,right);
		case '-': return subtract_op(left,right);
		case '*': return multiply_op(left,right);
		default: return 0;
	}
}

float arithmetic_with_ptr(float left, float right, float (*ptr)(float,float)){
	return ptr(left,right);
}