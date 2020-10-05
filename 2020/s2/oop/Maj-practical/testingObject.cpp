#include <iostream>
#include "Object.h"
using namespace std;

int main(){
	Object thing = Object();

	boid.setDx(1);
	boid.setDy(2);
	boid.setX(5);
	boid.setY(5);
	boid.setDirection();

	cout << "thing has X Pos: " << thing.getX() << ", Y pos: " << thing.getY() << ", dx: " << thing.getDx() << ", dy: " << thing.getDy() << endl;

	return 0;
}