#include "Object.h"
#include "Bird.h"

Bird::Bird():Object() {
	maxSpeed = 5;
}

void Bird::setMaxX(float){}
void Bird::setMaxY(float){}
float Bird::getMaxSpeedX(){}
float Bird::getMaxSpeedY(){}

void Bird::setDirection(int i){
	//change sprite (aka flap wings) every 2 frames
	if(objID % 2 == 0){
		if(i % 4 <2){
			direction = 'v';
		}else{
			direction = '^';
		}
	}else{
	if(i % 4 <2){
			direction = '^';
		}else{
			direction = 'v';
		}
	}
}

void Bird::checkIfSpeeding(){
	if(getCurrSpeed() > maxSpeed){
			dx = (dx / getCurrSpeed()) * maxSpeed;
			dy = (dy / getCurrSpeed()) * maxSpeed;
		}
}

Bird::~Bird(){

}