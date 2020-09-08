#include <string>
#include "Market.h"
using namespace std;

Market::Market(){
	name = "Default name";
	age = 0;
}

void Market::setName(string marName){
	name = marName;
}

string Market::getName(){
	return name;
}

void Market::setAge(int merAge){
	age = merAge;
}

int Market::getAge(){
	return age;
}