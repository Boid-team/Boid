#include <iostream>
#include "person.h"
#include "wizard.h"
using namespace std;

int main(){
	Wizard Gandalf = Wizard("Gandalf", 180, 2);

	for(int i = 0; i < 3; i++){
	Gandalf.cast_spell();
	}
}

