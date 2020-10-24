#include "Object.h"
#include "Fish.h"

Fish::Fish():Object(){
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

Fish::~Fish(){

}