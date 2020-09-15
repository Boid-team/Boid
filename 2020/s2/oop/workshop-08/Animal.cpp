#include <string>
#include "Animal.h"
using namespace std;

Animal::Animal(string aSpecies){
	species = aSpecies;
	currentID++;
	id = currentID;
}

int Animal::currentID = 0;

void Animal::set_name(string aName){
	name = aName;
}

string Animal::get_species(){
	return species;
}

string Animal::get_name(){
	return name;
}

int Animal::get_ID(){
	return id;
}