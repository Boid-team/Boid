#include <ncurses.h>
#include <stdlib.h>
#include <time.h>
#include "Object.h"
#include "Bird.h"
#include "Functions.h"
using namespace std;

int main(){

    Object *array = new Bird[5];
    //get average x position of bird array of 4 birds, 0th bird is for comparison
    array[0].setX(0);
    array[0].setY(0);
    array[0].setDx(0);
    array[0].setDy(0);

    float xAvg = getAverageX(array,5,&array[0]);
    float yAvg = getAverageY(array,5,&array[0]);
    float dxAvg = getAverageDx(array,5,&array[0]);
    float dyAvg = getAverageDy(array,5,&array[0]);

    cout << "Bird array has average x: " << xAvg << " average y: " << yAvg << " average dx: " << dxAvg << " average dy: " << dyAvg << endl;
    
    
}