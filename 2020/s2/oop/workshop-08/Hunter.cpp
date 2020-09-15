#include <string>
#include <vector>
#include "Animal.h"
#include "Hunter.h"
using namespace std;

Hunter::Hunter(string aSpecies): Animal(aSpecies){
	kills = {};
}

void Hunter::record_kill(string kill){
	kills.push_back(kill);
}

int Hunter::numberOfKills(){
	return kills.size();
}

vector<string> Hunter::get_kills(){
	return kills;
}