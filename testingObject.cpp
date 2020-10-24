#include <iostream>
#include "Object.h"
#include <cmath>
#include <ncurses.h>
using namespace std;

int main(){
	Object boid = Object();

	boid.setDx(1);
	boid.setDy(2);
	boid.setX(5);
	boid.setY(5);
	boid.setDirection();

	// cout << "thing has X Pos: " << thing.getX() << ", Y pos: " << thing.getY() << ", dx: " << thing.getDx() << ", dy: " << thing.getDy() << endl;
	int i = 0;
	char ch;
	initscr();
	halfdelay(1);
	while(1){
		if(ch == 'q' | ch == 'Q'){
			break;
		}else{
			i++;
			mvprintw(1,1,"%d",i);
			
			boid.setDy(sin(i));
			boid.setDx(cos(i));
			boid.setDirection();

			mvaddch(boid.getY(),boid.getX(),boid.getDirection());
			refresh();
			ch = getch();
			
		}
	}


	endwin();
	return 0;
}