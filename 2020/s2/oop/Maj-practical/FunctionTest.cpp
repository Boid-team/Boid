#include <ncurses.h>
#include "Object.h"
#include "Bird.h"
#include "Functions.cpp"


int main(){

	int n = 15;

	Object *array = new Bird[n];

	for(int i = 0; i < n; i++){
		// array[i].setX(i*5);
		// array[i].setY(i*2);
		array[i].setDy(1.5);
		array[i].setDx(3);
	}

	char ch;
	int i = 0;

	initscr();
	halfdelay(2 );

	int height = 30;
	int width = 100;


	while(1){
		if(ch == 'q' | ch == 'Q'){
			break;
		}else{

		clear();
		move(0,0);
		hline('-',width);
		move(0,width);
		vline('|',height);
		move(height,0);
		hline('-',width);

		stayWithinBounds(array,n,100,30);
		steerTowardsCentre(array,n);



		for(int i = 0; i < n; i++){
			// array[i].checkIfSpeeding();
			array[i].setDirection();
			array[i].updatePos();
			// mvprintw(i,115,"x pos: %f", array[i].getDx());
			mvaddch(array[i].getY(), array[i].getX(), array[i].getDirection());
		}

		mvaddch(getAverageY(array,n,&array[1]), getAverageX(array,n,&array[1]),'o');

		// mvprintw(0,115,"0's ID: %d",array[0].getID());
		// mvprintw(1,115,"average x against 2: %d",getAverageX(array,n,&array[2]));
		// mvprintw(2,115,"x of 2: %d", array[2].getDx());
		i++;
		move(height,width);
		 //mvprintw(1,1,"%d",i);

		// refresh();
		ch = getch();

		}
	}



	endwin();
	delete[] array;
	return 0;
}
