#include <string>
#include <iostream>
#include "aircraft.h"
#include "person.h"
using namespace std;

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