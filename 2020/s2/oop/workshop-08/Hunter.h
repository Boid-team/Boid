#ifndef _HUNTER_H
#define _HUNTER_H

#include <string>
#include <vector>
#include "Animal.h"
using namespace std;

class Hunter: public Animal{

vector<string> kills;
public:
	Hunter(string);
	void record_kill(string);
	int numberOfKills();

	vector<string> get_kills();


};


#endif