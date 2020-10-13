#include "Object.h"
#include "Bird.h"
#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main(){

    srand(time(NULL));

    Object * bird = new Bird;
    cout << "Object bird has x: " << bird->getX() << " y: " << bird->getY() << " dx: " << bird->getDx() << " dy: " << bird->getDy() << endl;

    float inX, inY, inDx, inDy;

    cin >> inX;
    bird->setX(inX);
    cin >> inY;
    bird->setY(inY);
    cin >> inDx;
    bird->setDx(inDx);
    cin >> inDy;
    bird->setDy(inDy);

    cout << "Object bird has x: " << bird->getX() << " y: " << bird->getY() << " dx: " << bird->getDx() << " dy: " << bird->getDy() << endl;

    delete bird;
}