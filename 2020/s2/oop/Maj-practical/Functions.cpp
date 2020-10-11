#include "Object.h"
#include "Functions.h"

void stayWithinBounds(Object *array, int length, int maxX, int maxY){
	float edgeL = 5;
	float turnSpeed = 0.75;

	for(int i = 0; i <= length; i++){
		if(array[i].getX() < edgeL){
			array[i].setDx(array[i].getDx() + turnSpeed);
		}
		if(array[i].getX() >= maxX-edgeL){
			array[i].setDx(array[i].getDx() - turnSpeed);
		}
		if(array[i].getY() <= edgeL){
			array[i].setDy(array[i].getDy() + turnSpeed);
		}
		if(array[i].getY() >= maxY - edgeL){
			array[i].setDy(array[i].getDy() - turnSpeed);
		}
	}
}

// void steerTowardsCentre(*Object array, int length);

// void avoidOthers(*Object array, int length);

// void matchVelocity(*Object array, int length);
