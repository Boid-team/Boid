#include "Object.h"
#include "Bird.h"



void stayWithinBounds(Object *array, int length, int maxX, int maxY);
void steerTowardsCentre(Object *array, int length);
float getAverageX(Object *array, int length, Object * thing);
float getAverageY(Object *array, int length, Object * thing);
// void avoidOthers(*Object array, int length);
// void matchVelocity(*Object array, int length);