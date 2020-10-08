#ifndef BIRD_H
#define BIRD_H

#include "Object.h"

class Bird: public Object
{
public:
	Bird();
	
	void checkIfSpeeding();

	~Bird();
	
};

#endif