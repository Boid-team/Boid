#include <string>
#include <iostream>
#include "aircraft.h"
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

aircraft::aircraft(){
	
}

aircraft::aircraft(string theCallsign, person thePilot, person theCoPilot){
	callsign = theCallsign;
	pilot = thePilot;
	copilot = theCoPilot;
}

void aircraft::setPilot(person thePilot){
	pilot = thePilot;
}

person aircraft::getPilot(){
	return pilot;
}

void aircraft::setCoPilot(person theCoPilot){
	copilot = theCoPilot;
}

person aircraft::getCoPilot(){
	return copilot;
}

void aircraft::printDetails(){
	cout << callsign << endl << pilot.getName() << endl << copilot.getName() << endl;
}