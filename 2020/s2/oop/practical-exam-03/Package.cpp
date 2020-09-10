#include <string>
#include "Package.h"
using namespace std;

Package::Package(){
	weight = 0;
	contents = "";
}

Package::Package(string contentsIn, int weightIn){
	weight = weightIn;
	contents = contentsIn;
}

string Package::get_contents(){
	return contents;
}

int Package::get_weight(){
	return weight;
}

Package::~Package(){
	
}