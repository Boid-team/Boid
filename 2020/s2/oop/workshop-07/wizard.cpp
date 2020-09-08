#include <iostream>
#include <string>
#include <chrono>
#include <thread>
#include "wizard.h"
using namespace std;

Wizard::Wizard(string aname, int height, int spellLim): Person(aname,height){
	spell_limit = spellLim;
	spell_count = 0;
}

int Wizard::getSpellCount(){
	return spell_count;
}

void Wizard::cast_spell(){
	spell_count++;
	if(spell_count > spell_limit){
		cout << "ERROR! SPELL LIMIT REACHED! SELF-DESTRUCT IN 5" << endl;
		for(int i = 4; i > 0; i--){
			std::this_thread::sleep_for(std::chrono::seconds(1));
			cout << i << endl;
		}
		cout << "BOOM!" << endl;
		spell_count--;
	}else{
		cout << "ZAP!" << endl;
	}
}