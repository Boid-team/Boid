#ifndef _ANIMAL_H
#define _ANIMAL_H

#include <string>
using namespace std;

class Animal{
	string name;
	string species;
	int id;

	static int currentID;
public:
	Animal(string);
	void set_name(string);

	string get_species();
	string get_name();
	int get_ID();

};

#endif