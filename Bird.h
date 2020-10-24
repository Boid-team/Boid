#ifndef BIRD_H
#define BIRD_H

#include "Object.h"

class Bird: public Object
{
public:
	Bird();


	void setDirection(int i);

	void setMaxX(float);
	void setMaxY(float);
	float getMaxSpeedX();
	float getMaxSpeedY();
	void checkIfSpeeding();

	~Bird();

};

#endif