#ifndef _BOIDS_H
#define _BOIDS_H


class Object{
protected:
	int x, y ,dx, dy;

	float maxSpeed;

	char direction;

public:
	Object();

	float getCurrSpeed();
	int getX();
	int getY();
	int getDx();
	int getDy();
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