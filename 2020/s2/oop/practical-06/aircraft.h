
#ifndef _AIRPLANE_H__
#define _AIRPLANE_H__

#include <string>
#include "person.h"
using namespace std;

class aircraft{
	string callsign;
	person pilot;
	person copilot;

public:
	aircraft();
	aircraft(string, person, person);
	void setPilot(person);
	person getPilot();
	void setCoPilot(person);
	person getCoPilot();
	void printDetails();

};

#endif