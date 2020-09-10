#include <string>
#include <iostream>
#include "Package.h"
#include "Pile.h"
using namespace std;

Pile::Pile(){
	packages = new Package[32];
	max_weight = 0;
	curr_weight = 0;
	package_count = 0;
}

Pile::Pile(int weight){
	packages = new Package[32];
	max_weight = weight;
	curr_weight = 0;
	package_count = 0;
}

int Pile::get_weight(){
	return curr_weight;
}

int Pile::get_number_of_Packagees(){
	return package_count;
}

Package* Pile::get_contents(){
	return packages;
}

bool Pile::add_Package(Package a_Package){
	if(curr_weight >= max_weight){//max packages reached or exceeding max weight
		// cout << "Pile weight exceeded, rejecting..." << endl;
		return 0;
	}else if(package_count >= 32){
		// cout << "Too many packages, rejecting.." << endl;
		return 0;
	}else{
		if(a_Package.get_weight() + curr_weight > max_weight){//accepted package exceeds max weight
			// cout << "Package overweight, rejecting..." << endl;
			return 0;
		}else{// Package accepted
			// cout << "Package accepted." << endl; 
			*(packages + package_count) = a_Package;
			package_count++;
			curr_weight += a_Package.get_weight();
			// cout << "Current package count is: " << package_count << " current weight is: "  << curr_weight << endl;
			return 1;
		}
	}
}