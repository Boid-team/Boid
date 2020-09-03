#ifndef _PERSON_H__
#define _PERSON_H__

#include <string>
using namespace std;

class person{
	string name;
	int salary;
public:
	person();
	person(string, int);
	void setName(string);
	string getName();
	void setSalary(int);
	int getSalary();
};

#endif

#ifndef _AIRPLANE_H__
#define _AIRPLANE_H__

#include <string>
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