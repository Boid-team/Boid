#ifndef _BOIDS_H
#define _BOIDS_H

#include <stdlib.h>
using namespace std;

class Object{
protected:
	int x, y ,dx, dy;

	float maxSpeed;

	char direction;

public:
	Object(){
		x = rand() % 24;
		y = rand() % 24;
		dx = 0;
		dy = 0;
	}

	float currSpeed(){
		return sqrt(pow(dx,2) + pow(dy,2));
	}

	void checkIfSpeeding(){
		if(currSpeed() > maxSpeed){
			dx = (dx / currSpeed()) * maxSpeed;
			dy = (dy / currSpeed()) * maxSpeed;
		}
	}

	void checkDirection(){
		if(arctan(dy/dx) < 90){
			direction = '^';
		}if else(){
			direction = '>';
		}if else(){
			direction = 'v';
		}if else(){
			direction = '<';
		}
	}

	void updatePos(){
		x = x + dx;
		y = y + dy;
	}

};

#endif