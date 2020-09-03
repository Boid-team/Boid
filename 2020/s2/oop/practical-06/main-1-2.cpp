#include <iostream>
#include <string>
#include "person.h"
using namespace std;


int main(){
	person array[4];
	for(int i = 0; i < 4; i++){
		array[i] = person("default name", 0);
		array[i].setName("Person " + string::to_string(i));
		array[i].setSalary(i * 1000);
		cout << "Person " << i << "'s name: " << array[i].getName() << ", salary: " << array[i].getSalary() << endl;
	}
}