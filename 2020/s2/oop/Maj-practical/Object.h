#ifndef _BOIDS_H
#define _BOIDS_H


class Object{
protected:
	float x, y ,dx, dy;

	float maxSpeed;

	char direction;

	static int id;
	int objID;
public:
	Object();

	float getCurrSpeed();
	float getX();
	float getY();
	float getDx();
	float getDy();
	char getDirection();
	int getID();

	void setX(float);
	void setY(float);
	void setDx(float);
	void setDy(float);

	virtual void setDirection(int) = 0;

	virtual void checkIfSpeeding() = 0;

	void keepInBounds(int maxX, int maxY);

	// float distance(*Object);


	void updatePos();

	float separation(Object *anotherObject);

	virtual ~Object();
};

#endif