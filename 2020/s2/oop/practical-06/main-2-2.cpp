#include <iostream>
#include <string>
#include "aircraft.h"
using namespace std;


int main(){
	person array[3];

	array[0] = person("Tom Cruise", 1000);
	array[1] = person("Amelia Earhart", 4000);
	array[2] = person("Zaharie", 5000);

	aircraft jimothy = aircraft("Jimothy", array[0], array[1]);
	cout << "Pilot: " << jimothy.getPilot().getName() << " Co-Pilot: " << jimothy.getCoPilot().getName() << endl;
	person temp = jimothy.getPilot();
	jimothy.setPilot(array[2]);
	jimothy.setCoPilot(temp);
	cout << "Pilot: " << jimothy.getPilot().getName() << " Co-Pilot: " << jimothy.getCoPilot().getName() << endl;

}