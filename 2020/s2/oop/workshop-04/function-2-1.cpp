#include <string>
using namespace std;

float add_op(float left, float right){

	return left + right;
}
float subtract_op(float left, float right){
	return left - right;
}
float arithmetic_ops(float left, float right, string op){
	switch(op[0]){
		case '+': return add_op(left,right);
		case '-': return subtract_op(left,right);
		default: return 0;
	}
}