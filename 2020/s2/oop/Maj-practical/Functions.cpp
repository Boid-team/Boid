#include "Object.h"
#include "Functions.h"


void stayWithinBounds(Object *array, int length, int maxX, int maxY){
	float edgeLX = 15;
	float edgeLY = 5;
	float turnSpeed = 1;



	//check if the coordinates of each object is too close to the edge by edgeL units, and turn away
	for(int i = 0; i < length; i++){

		//Set hard limit on objects, any object out of bounds will have coordinates set to the edge of the bound
		if(array[i].getX() >= maxX -1){
			array[i].setX(maxX -1);
		}
		if(array[i].getX() <= 1){
			array[i].setX(1);
		}
		if(array[i].getY() >= maxY -1){
			array[i].setY(maxY -1);
		}
		if(array[i].getY() <= 1){
			array[i].setY(1);
		}

		//Objects will avoid edge if they get too close
		if(array[i].getX() <= edgeLX){
			array[i].setDx(array[i].getDx() + turnSpeed);
		}
		if(array[i].getX() >= maxX-edgeLX){
			array[i].setDx(array[i].getDx() - turnSpeed);
		}
		if(array[i].getY() <= edgeLY){
			array[i].setDy(array[i].getDy() + turnSpeed);
		}
		if(array[i].getY() >= maxY - edgeLY){
			array[i].setDy(array[i].getDy() - turnSpeed);
		}
	}
}

void steerTowardsCentre(Object *array, int length){
	float turnSpeedFactor = 0.005;

	for(int i = 0; i < length; i++){

		array[i].setDx( array[i].getDx() + ( ( getAverageX(array,length, &array[i]) - array[i].getX() ) * turnSpeedFactor) );

		array[i].setDy( array[i].getDy() + ( ( getAverageY(array,length, &array[i]) - array[i].getY() ) * turnSpeedFactor) );

		array[i].checkIfSpeeding();
	}

}

float getAverageX(Object * array, int length, Object * thing){
	float centreX;

	for(int i = 0; i < length; i++){//iterate over object array, add each object x pos to centreX if its not the input object

		if(array[i].getID() != thing -> getID()){
			centreX += array[i].getX();
		}

	}
	centreX  = centreX / (length - 1);
	return (centreX);//return average of the X positions of the other objects besides input object

}

float getAverageY(Object *array, int length, Object * thing){
	float centreY;

	for(int i = 0; i < length; i++){//iterate over object array, add each object Y pos to centreY if its not the input object

		if(array[i].getID() != thing -> getID()){
			centreY += array[i].getY();
		}

	}
	centreY = centreY / (length - 1);
	return centreY;//return average of the Y positions of the other objects besides input object
}


// void avoidOthers(*Object array, int length);

// void matchVelocity(*Object array, int length);
