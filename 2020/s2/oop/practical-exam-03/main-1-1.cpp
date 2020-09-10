#include <string>
#include <iostream>
#include "Package.h"
using namespace std;

int main(){

	Package pack1 = Package();
	string pack1Cont = pack1.get_contents();
	int pack1Weight = pack1.get_weight();
	cout << "Pack 1 weight : " << pack1Weight << " contents: " << pack1Cont << endl;

	Package pack2 = Package("Stuff", 10);
	string pack2Cont = pack2.get_contents();
	int pack2Weight = pack2.get_weight();
	cout << "Pack 2 weight : " << pack2Weight << " contents: " << pack2Cont << endl;


	return 0;
}