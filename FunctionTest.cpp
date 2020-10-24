#include <ncurses.h>
#include <stdlib.h>
#include <time.h>
#include "Object.h"
#include "Bird.h"
#include "Functions.cpp"
using namespace std;

int main(){

	srand(time(NULL));

	int n = 25;


	Object *array = new Bird[n];

	char ch;
	int frameCount = 0;

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
		steerTowardsCentre(array,n,0.03);
		avoidOtherObjects(array,n,0.01);
		matchVelocity(array,n,0.01);


		for(int i = 0; i < n; i++){//loop through object array

			array[i].setDirection(frameCount);
			array[i].updatePos();
			array[i].keepInBounds(width,height);

			mvaddch(array[i].getY(), array[i].getX(), array[i].getDirection());
		}

		// mvaddch(getAverageY(array,n,&array[1]), getAverageX(array,n,&array[1]),'o');//draw centre of mass

		frameCount++;
		move(height,width);



		ch = getch();

		}
	}



	endwin();
	delete[] array;
	return 0;
}
