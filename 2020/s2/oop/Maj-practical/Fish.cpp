#include "Object.h"
#include "Fish.h"

Fish::Fish():Object(){
	maxSpeedX = 4;
	maxSpeedY = 2;
		// x = rand() % 24;
		// y = rand() % 24;
		// dx = rand() % 5;
		// dy = rand() % 5;
}

float Fish::getMaxSpeedX(){
	return maxSpeedX;
}

float Fish::getMaxSpeedY(){
	return maxSpeedY;
}

void Fish::checkIfSpeeding(){
	if(dy > maxSpeedY){
		dy = maxSpeedY;
	}
	if(dx > maxSpeedX){
		dx = maxSpeedX;
	}
}

Fish::~Fish(){

}