#include "Object.h"
#include "Fish.h"

Fish::Fish():Object(){
	maxSpeedX = 4;
	maxSpeedY = 2;
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