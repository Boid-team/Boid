#include "Object.h"
#include "Bird.h"
#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main(){

    srand(time(NULL));

    Object * bird = new Bird;
    cout << "Running position and velocity vector test" << endl;
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

    cout << "Running variables test" << endl;
    cout << "Object bird has current Speed " << bird->getCurrSpeed() << " ID: " << bird->getID() << endl;
    cout << "Running direction sprite test, enter frame value" << endl;
    int frame = 0;
    cin >> frame;
    bird->setDirection(frame);
    cout << "Direction sprite is: " << bird->getDirection() << endl;

    Bird bird2 = Bird();
    bird2.setX(1);
    bird2.setY(1);
    cout << "separation between bird and bird 2 with x,y=1 is: " << bird->separation(&bird2) << endl;

    cout << "Updating position vector" << endl;
    bird->updatePos();
    cout << "Bird now has x: " << bird->getX() << " y: " << bird->getY() << endl;

    cout << "Keeping bird in bounds of x: 100, y: 30" << endl;
    bird->keepInBounds(100,30);
    cout << "Bird now has x: " << bird->getX() << " y: " << bird->getY() << endl;


    delete bird;
}