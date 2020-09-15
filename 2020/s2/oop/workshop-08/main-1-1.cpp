#include <string>
#include <iostream>
#include "Animal.h"
using namespace std;

int main(){
	Animal Elephant = Animal("Elephant");
	cout << "Elephant name: " << Elephant.get_name()<< ", species: " << Elephant.get_species() << ", ID: " << Elephant.get_ID() << endl;
	Elephant.set_name("Joe");
	cout << "Elephant name: " << Elephant.get_name() << ", species: " << Elephant.get_species() << ", ID: " << Elephant.get_ID() << endl;

	Animal Cheetah = Animal("Cheetah");
	cout << "Animal 2 name: " << Cheetah.get_name()<< ", species: "<< Cheetah.get_species() << ", ID: " << Cheetah.get_ID() << endl;
	Cheetah.set_name("Bob");
	cout << "Animal 2 name: " << Cheetah.get_name()<< ", species: "<< Cheetah.get_species() << ", ID: " << Cheetah.get_ID() << endl;
}