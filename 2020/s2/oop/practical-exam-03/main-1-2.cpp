#include <string>
#include <iostream>
#include "Package.h"
#include "Pile.h"
using namespace std;

int main(){

	Package pack1 = Package("Stuff", 5);
	Package pack2 = Package("Stuff", 6);
	Package pack3 = Package("Stuff ", 1);

	Pile aPile = Pile(10);

	aPile.add_Package(pack1);
	aPile.add_Package(pack2);
	aPile.add_Package(pack3);

	cout << aPile.get_weight() << endl;
	cout << aPile.get_number_of_Packagees() << endl;

}