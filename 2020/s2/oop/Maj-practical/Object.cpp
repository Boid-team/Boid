#include <stdlib.h>
#include <math.h>
#include <time.h>
#include "Object.h"
using namespace std;

#define PI 3.14159265

using namespace std;

Object::Object(){


	x = rand() % 24;
	y = rand() % 24;
	dx = rand() % 5;
	dy = rand() % 5;

	objID = id++;
}

int Object::id = 0;

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

int Object::getID(){
	return objID;
}

void Object::setX(float inX){
	x = inX;
}

void Object::setY(float inY){
	y = inY;
}

void Object::setDx(float inDx){
	dx = inDx;
}

void Object::setDy(float inDy){
	dy = inDy;
}

void Object::setDirection(int i){
		// if(dx != 0){

		// 	if(atan(dy/dx) * 180 / PI >= 45 | atan(dy/dx) * 180 / PI < 135){
		// 		direction = 'v';
		// 	}else if(atan(dy/dx) * 180 / PI < 45 | atan(dy/dx) * 180 / PI >= 315){
		// 		direction = '>';
		// 	}else if(atan(dy/dx) * 180 / PI < 315 | atan(dy/dx) * 180 / PI >= 225){
		// 		direction = '^';
		// 	}else if(atan(dy/dx) * 180 / PI >= 135 | atan(dy/dx) * 180 / PI < 225){
		// 		direction = '<';
		// 	}
		// }else{
		// 	if(dy < 0){
		// 		direction = '^';
		// 	}else if(dy > 0){
		// 		direction = 'v';
		// 	}else if(dy == 0){
		// 		direction = '.';
		// 	}
		// }
}

void Object::checkIfSpeeding(){

}

void Object::keepInBounds(int maxX, int maxY){
	if(x >= maxX -1){
		x = maxX -1;
	}
	if(x <= 1){
		x = 1;
	}
	if(y >= maxY -1){
		y = maxY -1;
	}
	if(y <= 1){
		y = 1;
	}
}

void Object::updatePos(){
		x = x + dx;
		y = y + dy;
}
float Object::separation(Object *anotherObject){
	float separation;

	separation = sqrt(pow(x-anotherObject->getX(),2) + pow(y - anotherObject -> getY(), 2));

	return separation;
}

Object::~Object(){

}

