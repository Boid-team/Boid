#ifndef _MEERKAT_H__
#define _MEERKAT_H__

#include <string>
using namespace std;

class meerkat{
	string name;
	int age;
public:
	meerkat();
	void setName(string);
	string getName();
	void setAge(int);
	int getAge();
	~meerkat();
};

#endif