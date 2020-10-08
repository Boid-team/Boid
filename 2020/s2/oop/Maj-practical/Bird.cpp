#include "Object.h"
#include "Bird.h"

Bird::Bird():Object() {

}

void Bird::checkIfSpeeding(){
	if(getCurrSpeed() > maxSpeed){
			dx = (dx / getCurrSpeed()) * maxSpeed;
			dy = (dy / getCurrSpeed()) * maxSpeed;
		}
}

Bird::~Bird(){
	
}