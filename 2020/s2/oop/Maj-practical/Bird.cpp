#include "Object.h"
#include "Bird.h"

Bird::Bird():Object() {
	maxSpeed = 5;
}

void Bird::setDirection(int i){
	if(i % 4 <2){
		direction = 'v';
	}else{
		direction = '^';
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