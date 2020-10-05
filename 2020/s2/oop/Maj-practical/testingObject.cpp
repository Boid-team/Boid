#include <iostream>
#include "Object.h"
using namespace std;

int main(){
	Object thing = Object();

	boid.setDx(1);
	boid.setDy(2);
	boid.setX(5);
	boid.setY(5);
	boid.setDirection();

	// cout << "thing has X Pos: " << thing.getX() << ", Y pos: " << thing.getY() << ", dx: " << thing.getDx() << ", dy: " << thing.getDy() << endl;
	int i = 0;
	initscr();
	halfdelay(1);
	while(1){
		if(ch == 'q' | ch == 'Q'){
			break;
		}else{
			i++;

			
			boid.setDy()


			ch = getch();
			clear();
		}
	}


	endwin();
	return 0;
}