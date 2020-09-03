#include <iostream>
#include "meerkat.h"
using namespace std;

int main(){
	meerkat meer1 = meerkat();
	meer1.setName("Alice");
	meer1.setAge(2);
	cout << "Meerkat 1's name: " << meer1.getName() << ", Meerkat 1's age: " << meer1.getAge() << endl;
	meerkat meer2 = meerkat();
	meer2.setName("Bob");
	meer2.setAge(3);
	cout << "Meerkat 2's name: " << meer2.getName() << ", Meerkat 2's age: " << meer2.getAge() << endl;
	meerkat meer3 = meerkat();
	meer3.setName("Charlie");
	meer3.setAge(4);
	cout << "Meerkat 3's name: " << meer3.getName() << ", Meerkat 3's age: " << meer3.getAge() << endl;	
	meerkat meer4 = meerkat();
	meer4.setName("Denise");
	meer4.setAge(40);
	cout << "Meerkat 4's name: " << meer4.getName() << ", Meerkat 4's age: " << meer4.getAge() << endl;


}