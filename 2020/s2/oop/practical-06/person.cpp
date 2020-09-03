#include <string>
#include "person.h"
using namespace std;

person::person(){
	name = "default name";
	salary = 0;
}

person::person(string myName, int newSalary){
	name = myName;
	salary = newSalary;
}

void person::setName(string myName){
	name = myName;
}

string person::getName(){
	return name;
}

void person::setSalary(int newSalary){
	salary = newSalary;
}

int person::getSalary(){
	return salary;
}