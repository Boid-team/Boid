#ifndef _PILE_H
#define _PILE_H

#include <string>
#include "Package.h"
using namespace std;

class Pile{
	Package *packages;
	int max_weight;
	int curr_weight;
	int package_count;
public:
	Pile();
	Pile(int);

	int get_weight();
	int get_number_of_Packagees();

	Package *get_contents();

	bool add_Package(Package);

};

#endif