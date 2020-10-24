#include <iostream>
#include <ncurses.h>
#include <stdlib.h>
#include <time.h>
#include <string>
#include <sstream>
#include "Object.h"
#include "Bird.h"
#include "Functions.cpp"
using namespace std;

int main(){

    srand(time(NULL));

    Object *array = new Bird[5];
    //get average x position of bird array of 4 birds, 0th bird is for comparison
    array[0].setX(0);
    array[0].setY(0);
    array[0].setDx(0);
    array[0].setDy(0);


    float xAvg = getAverageX(array,5,&array[0]);
    float yAvg = getAverageY(array,5,&array[0]);
    float dxAvg = getAverageSpeedX(array,5,&array[0]);
    float dyAvg = getAverageSpeedY(array,5,&array[0]);

    // cout << "Bird array has average x: " << xAvg << " average y: " << yAvg << " average dx: " << dxAvg << " average dy: " << dyAvg << endl;

    float inX, inY, inDx, inDy;
    cout << "Enter X:" <<endl;
    cin >> inX;
    cout <<"Enter Y: " << endl;
    cin >>inY;
    cout << "Enter Dx: " << endl;
    cin >> inDx;
    cout << "Enter Dy: " << endl;
    cin >> inDy;

    for(int i = 1; i < 5; i++){
        array[i].setX(inX);
        array[i].setY(inY);
        array[i].setDx(inDx);
        array[i].setDy(inDy);
    }

    xAvg = getAverageX(array,5,&array[0]);
    yAvg = getAverageY(array,5,&array[0]);
    dxAvg = getAverageSpeedX(array,5,&array[0]);
    dyAvg = getAverageSpeedY(array,5,&array[0]);

    cout << "Bird array has average x: " << xAvg << " average y: " << yAvg << " average dx: " << dxAvg << " average dy: " << dyAvg << endl;

}