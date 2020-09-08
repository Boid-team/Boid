#ifndef _WIZARD_H__
#define _WIZARD_H__

#include <string>
#include "person.h"
using namespace std;
class Wizard : public Person{

	int spell_limit;
	int spell_count;
public:
	Wizard(string, int, int);
	int getSpellCount();
	void cast_spell();
};

#endif