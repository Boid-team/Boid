#include "Object.h"
#include "Functions.h"


void steerWithinBounds(Object *array, int length, int maxX, int maxY){
	float edgeLX = 15;
	float edgeLY = 5;
	float turnSpeed = 1;



	//check if the coordinates of each object is too close to the edge by edgeL units, and turn away
	for(int i = 0; i < length; i++){


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



void steerTowardsCentre(Object *array, int length, float factor){
	float turnSpeedFactor = factor;

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


void avoidOtherObjects(Object *array, int length, float inFactor){
	float minDist = 4;
	float turnFactor = inFactor;

	for(int i = 0; i < length; i++){
		for(int j = 0; j < length; j++){

			if(i != j){

				if(array[i].separation(&array[j]) < minDist){
					array[i].setDx(array[i].getDx() + ((array[j].getX() - array[i].getX()) * turnFactor)   );
					array[i].setDy(array[i].getDy() + ((array[j].getY() - array[i].getY()) * turnFactor)   );

				}

			}

		}

	}
}

void matchVelocity(Object *array, int length, float factor){
	float turnSpeedFactor = factor;

	for(int i = 0; i < length; i++){

		array[i].setDx(array[i].getDx() + ((getAverageSpeedX(array,length,&array[i]) - array[i].getDx() ) * turnSpeedFactor ) );
		array[i].setDy(array[i].getDy() + ((getAverageSpeedY(array,length,&array[i]) - array[i].getDy() ) * turnSpeedFactor ) );

		array[i].checkIfSpeeding();
	}
}

float getAverageSpeedX(Object *array, int length, Object *thing){
	float averageDX;

	for(int i = 0; i < length; i++){
		if(array[i].getID() != thing -> getID()){
			averageDX += array[i].getDx();
		}
	}

	averageDX = averageDX / length -1;
	return averageDX;
}

float getAverageSpeedY(Object *array, int length, Object *thing){
	float averageDY;

	for(int i = 0; i < length; i++){
		if(array[i].getID() != thing -> getID()){
			averageDY += array[i].getDy();
		}
	}

	averageDY = averageDY / (length -1);
	return averageDY;
}

// void keepInBounds(Object *array, int length, int maxX, int maxY){
// 	for(int i = 0; i < length; i++){
// 		//Set hard limit on objects, any object out of bounds will have coordinates set to the edge of the bound
// 		if(array[i].getX() >= maxX -1){
// 			array[i].setX(maxX -1);
// 		}
// 		if(array[i].getX() <= 1){
// 			array[i].setX(1);
// 		}
// 		if(array[i].getY() >= maxY -1){
// 			array[i].setY(maxY -1);
// 		}
// 		if(array[i].getY() <= 1){
// 			array[i].setY(1);
// 		}

// 	}
// }