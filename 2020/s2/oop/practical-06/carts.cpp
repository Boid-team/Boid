#include <string>
#include <iostream>
#include "meerkat.h"
using namespace std;

meerkat::meerkat(){
	name = "Default name";
	age = 0;
}

void meerkat::setName(string meerName){
	name = meerName;
}

string meerkat::getName(){
	return name;
}

void meerkat::setAge(int meerAge){
	age = meerAge;
}

int meerkat::getAge(){
	return age;
}

meerkat::~meerkat(){
	
}

cart::cart(){
	capacity = 4;
}

bool cart::addMeerkat(meerkat cat){
	if(meerkats.size <= capacity){
		meerkats.push_back(cat);
		return true;
	}else{
		return false;
	}
}

void emptyCart(){
	for(int i = 0; i < meerkats.size; i++){
		meerkats.pop_back();
	}
}

void printMeerkats(){
	for(int i = 0; i < meerkats.size; i++){
		cout << meerkats[i].name << " " << meerkats[i].age << endl;
	}
}