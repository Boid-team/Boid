#include <string>
#include "Animal.h"
#include "Vegie.h"
using namespace std;

Vegie::Vegie(string aSpecies): Animal(aSpecies){
	favFood = "Grass";
}

void Vegie::set_favourite_food(string aVegie){
	favFood = aVegie;
}

string Vegie::getFavouriteFood(){
	return favFood;
}