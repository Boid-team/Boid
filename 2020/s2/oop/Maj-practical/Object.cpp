#include <stdlib.h>
#include <math.h>
#include "Object.h"

#define PI 3.14159265

using namespace std;

Object::Object(){
		x = rand() % 24;
		y = rand() % 24;
		dx = rand() % 5;
		dy = rand() % 5;
}

//GETTERS

float Object::getCurrSpeed(){
		return sqrt(pow(dx,2) + pow(dy,2));
}

float Object::getX(){
	return x;
}

float Object::getY(){
	return y;
}

float Object::getDx(){
	return dx;
}

float Object::getDy(){
	return dy;
}

char Object::getDirection(){
	return direction;
}

void Object::setX(int inX){
	x = inX;
}

void Object::setY(int inY){
	y = inY;
}

void Object::setDx(int inDx){
	dx = inDx;
}

void Object::setDy(int inDy){
	dy = inDy;
}

void Object::setDirection(){
		if(dx != 0){

			if(atan(dy/dx) * 180 / PI >= 45 | atan(dy/dx) * 180 / PI < 135){
				direction = 'v';
			}else if(atan(dy/dx) * 180 / PI < 45 | atan(dy/dx) * 180 / PI >= 315){
				direction = '>';
			}else if(atan(dy/dx) * 180 / PI < 315 | atan(dy/dx) * 180 / PI >= 225){
				direction = '^';
			}else if(atan(dy/dx) * 180 / PI >= 135 | atan(dy/dx) * 180 / PI < 225){
				direction = '<';
			}
		}else{
			if(dy < 0){
				direction = '^';
			}else if(dy > 0){
				direction = 'v';
			}else if(dy == 0){
				direction = '.';
			}
		}
}

void Object::checkIfSpeeding(){
		if(getCurrSpeed() > maxSpeed){
			dx = (dx / getCurrSpeed()) * maxSpeed;
			dy = (dy / getCurrSpeed()) * maxSpeed;
		}
}

void Object::updatePos(){
		x = x + dx;
		y = y + dy;
}




