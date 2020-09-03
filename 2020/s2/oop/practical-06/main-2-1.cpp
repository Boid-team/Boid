#include <iostream>
#include "carts.h"
using namespace std;

int main(){
	meerkat meer1 = meerkat();
	meer1.setName("Alice");
	meer1.setAge(2);
	meerkat meer2 = meerkat();
	meer2.setName("Bob");
	meer2.setAge(3);
	meerkat meer3 = meerkat();
	meer3.setName("Charlie");
	meer3.setAge(4);
	meerkat meer4 = meerkat();
	meer4.setName("Denise");
	meer4.setAge(40);
	meerkat meer5 = meerkat();
	meer5.setName("Elbert");
	meer5.setAge(5);

	meerkat meerkats[5] = {meer1, meer2, meer3, meer4, meer5};

	cart theCart = cart();

	for(int i = 0; i < 5; i++){
		theCart.addMeerkat(meerkats[i]);

	}

	theCart.printMeerkats();
}