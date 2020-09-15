#include <iostream>
#include "Animal.h"
#include "Vegie.h"
using namespace std;

int main(){

	Vegie Goat = Vegie("Goat");
	cout << "Vegie Goat has favourite food: " << Goat.getFavouriteFood() << endl;
	Goat.set_favourite_food("Hats");
	cout << "Vegie Goat has favourite food: " << Goat.getFavouriteFood() << endl;


	return 0;
}