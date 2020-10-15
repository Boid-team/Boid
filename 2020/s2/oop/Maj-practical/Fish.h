#ifndef FISH_H
#define FISH_H

#include "Object.h"

class Fish: public Object
{
protected:
	float maxSpeedX, maxSpeedY;
public:

	Fish();


	float getMaxSpeedX();
	float getMaxSpeedY();

	void checkIfSpeeding();

	void setDirection(int);
	void setMaxX(float);
	void setMaxY(float);
	~Fish();

};

#endif