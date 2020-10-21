#ifndef FISH_H
#define FISH_H

#include "Object.h"

class Fish: public Object
{

public:

	Fish();

	void checkIfSpeeding();

	void setDirection(int);

	~Fish();

};

#endif