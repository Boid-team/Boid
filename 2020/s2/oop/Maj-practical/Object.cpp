#include <stdlib.h>
#include <math.h>
#include <time.h>
#include "Object.h"
using namespace std;

using namespace std;

Object::Object(){


	x = rand() % 24;
	y = rand() % 24;
	dx = (rand() % 10) - 5;
	dy = (rand() % 10) - 5;

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

void Object::setMaxX(float maxX){
	maxSpeedX = maxX;
}

void Object::setMaxY(float maxY){
	maxSpeedY = maxY;
}


float Object::getMaxSpeedX(){
	return maxSpeedX;
}

float Object::getMaxSpeedY(){
	return maxSpeedY;
}


void Object::setDirection(int i){

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

