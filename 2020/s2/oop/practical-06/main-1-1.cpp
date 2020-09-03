#include <iostream>
#include "meerkat.h"
using namespace std;

int main(){
	meerkat meer1 = meerkat();
	cout << "Meerkat 1's name: " << meer1.getName() << ", Meerkat 1's age: " << meer1.getAge() << endl;
	meerkat meer2 = meerkat();
}