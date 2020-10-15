#include "Object.h"
#include "Fish.h"

Fish::Fish():Object(){
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

void Fish::setDirection(int i){
	if(dx < 0){
		direction = '<';
	}else if(dx > 0){
		direction = '>';
	}else{
		direction = '.';
	}
}

void Fish::setMaxX(float maxX){
	maxSpeedX = maxX;
}

void Fish::setMaxY(float maxY){
	maxSpeedY = maxY;
}

Fish::~Fish(){

}