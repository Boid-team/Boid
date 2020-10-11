#include <ncurses.h>
#include "Object.h"
#include "Bird.h"
#include "Functions.cpp"

// WINDOW *create_newwin(int height, int width, int startY, int startX);

int main(){

	int n = 5;

	Object *array = new Bird[n];

	for(int i = 0; i < n; i++){
		array[i].setDy(1.5);
		array[i].setDx(1.5);
	}

	// WINDOW *win;

	char ch;
	int i = 0;
	initscr();
	halfdelay(2);
	// cout << "Still working!" << endl;

	int height = 30;
	int width = 100;
	int startX = (COLS-width)/2;
	int startY = (LINES - height)/2;

	// win = create_newwin(height,width,startY,startX);

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

		for(int i = 0; i < n; i++){

			array[i].setDirection();
			array[i].updatePos();
			mvaddch(array[i].getY(), array[i].getX(), array[i].getDirection());
		}

		move(height,width);
		// mvprintw(1,1,"%d",i);

		// refresh();
		ch = getch();

		}
	}



	endwin();
	delete[] array;
	return 0;
}


// WINDOW *create_newwin(int height, int width, int starty, int startx)
// {	WINDOW *local_win;

// 	local_win = newwin(height, width, starty, startx);
// 	box(local_win, 0 , 0);		/* 0, 0 gives default characters 
// 					 * for the vertical and horizontal
// 					 * lines			*/
// 	wrefresh(local_win);		/* Show that box 		*/

// 	return local_win;
// }