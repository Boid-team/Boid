#ifndef _MARKET_H__
#define _MARKET_H__

#include <string>
using namespace std;

class Market{
	string name;
	int age;
public:
	Market();
	void setName(string);
	string getName();
	void setAge(int);
	int getAge();

};



#endif _MARKET_H__