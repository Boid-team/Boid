#ifndef _VEGIE_H
#define _VEGIE_H

#include <string>
#include "Animal.h"
using namespace std;

class Vegie: public Animal{
	string favFood;
public:
	Vegie(string);
	void set_favourite_food(string);
	string getFavouriteFood();
};

#endif