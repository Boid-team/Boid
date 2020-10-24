#include "Object.h"
#include "Bird.h"
#include <string>
using namespace std;


void steerWithinBounds(Object *array, int length, int maxX, int maxY);
void steerTowardsCentre(Object *array, int length, float factor);
float getAverageX(Object *array, int length, Object * thing);
float getAverageY(Object *array, int length, Object * thing);
void avoidOtherObjects(Object *array, int length, float inFactor);
void matchVelocity(Object *array, int length, float factor);
float getAverageSpeedX(Object *array, int length, Object *thing);
float getAverageSpeedY(Object *array, int length, Object *thing);
void restartBoids(Object *array, int length);
