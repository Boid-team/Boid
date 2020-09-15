#include <iostream>
#include "Animal.h"
#include "Hunter.h"
using namespace std;

int main(){
	Hunter Cheetah = Hunter("Cheetah");
	Cheetah.record_kill("Mouse");
	Cheetah.record_kill("Gazelle");
	Cheetah.record_kill("Gazelle");
	Cheetah.record_kill("Hyena");
	Cheetah.record_kill("Rabbit");
	Cheetah.record_kill("Rabbit");

	cout << "Hunter Cheetah has " << Cheetah.numberOfKills() << " kills: " << endl;
	for(int i = 0; i < Cheetah.numberOfKills(); i++){
		cout << Cheetah.get_kills()[i] << endl;
	}

	return 0;
}