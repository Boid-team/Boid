#include "Object.h"
#include "Fish.h"
#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main(){

    srand(time(NULL));

    Object * fish = new Fish();
    cout << "Running position and velocity vector test" << endl;
    cout << "Object fish has x: " << fish->getX() << " y: " << fish->getY() << " dx: " << fish->getDx() << " dy: " << fish->getDy() << endl;

    float inX, inY, inDx, inDy;

    cin >> inX;
    fish->setX(inX);
    cin >> inY;
    fish->setY(inY);
    cin >> inDx;
    fish->setDx(inDx);
    cin >> inDy;
    fish->setDy(inDy);

    cout << "Object fish has x: " << fish->getX() << " y: " << fish->getY() << " dx: " << fish->getDx() << " dy: " << fish->getDy() << endl;

    cout << "Running variables test" << endl;
    cout << "Object fish has current Speed " << fish->getCurrSpeed() << " ID: " << fish->getID() << endl;
    cout << "Running direction sprite test, enter frame value" << endl;
    int frame = 0;
    cin >> frame;
    fish->setDirection(frame);
    cout << "Direction sprite is: " << fish->getDirection() << endl;

    Fish fish2 = Fish();
    fish2.setX(1);
    fish2.setY(1);
    cout << "separation between fish and fish 2 with x,y=1 is: " << fish->separation(&fish2) << endl;

    cout << "Updating position vector" << endl;
    fish->updatePos();
    cout << "fish now has x: " << fish->getX() << " y: " << fish->getY() << endl;

    cout << "Keeping fish in bounds of x: 100, y: 30" << endl;
    fish->keepInBounds(100,30);
    cout << "fish now has x: " << fish->getX() << " y: " << fish->getY() << endl;


    delete fish;
}