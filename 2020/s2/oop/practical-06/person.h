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