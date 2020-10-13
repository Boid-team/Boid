#include <ncurses.h>
#include <stdlib.h>
#include <time.h>
#include "Object.h"
#include "Bird.h"
#include "Functions.cpp"
using namespace std;

int main(){

	srand(time(NULL));

	int n = 15;

	Object *array = new Bird[n];

	// for(int i = 0; i < n; i++){
	// 	// array[i].setX(i*5);
	// 	// array[i].setY(i*2);
	// 	array[i].setDy(1.5);
	// 	array[i].setDx(3);
	// }

	char ch;
	int j = 0;

	initscr();
	halfdelay(2);

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

		steerWithinBounds(array,n,width,height);
		steerTowardsCentre(array,n,0.01);
		matchVelocity(array,n,0.01);


		for(int i = 0; i < n; i++){//loop through object array

			array[i].setDirection(j);
			array[i].updatePos();
			array[i].keepInBounds(width,height);
			// mvprintw(i,115,"x pos: %f", array[i].getDx());
			mvaddch(array[i].getY(), array[i].getX(), array[i].getDirection());
		}

		mvaddch(getAverageY(array,n,&array[1]), getAverageX(array,n,&array[1]),'o');//draw centre of mass

		// mvprintw(0,115,"0's ID: %d",array[0].getID());
		// mvprintw(1,115,"average x against 2: %d",getAverageX(array,n,&array[2]));
		// mvprintw(2,115,"x of 2: %d", array[2].getDx());
		j++;
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
