#ifndef _PACKAGE_H
#define _PACKAGE_H

#include <string>
using namespace std;

class Package{
	int weight;
	string contents;

public:
	Package();
	Package(string, int);

	string get_contents();
	int get_weight();

	~Package();

};

#endif