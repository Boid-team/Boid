#ifndef _BOIDS_H
#define _BOIDS_H


class Object{
protected:
	float x, y ,dx, dy;

	float maxSpeed;

	char direction;

public:
	Object();

	float getCurrSpeed();
	float getX();
	float getY();
	float getDx();
	float getDy();
	char getDirection();

	void setX(int);
	void setY(int);
	void setDx(int);
	void setDy(int);

	void setDirection();

	void checkIfSpeeding();

	

	void updatePos();

};

#endif