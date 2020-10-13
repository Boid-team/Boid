#include <ncurses.h>
#include <stdlib.h>
#include <time.h>
#include "Object.h"
#include "Bird.h"
#include "Functions.cpp"
using namespace std;

int main(){

	srand(time(NULL));
	// cout << "enter type of boid: " << endl;
	// cin >> type;

	// if(type == "bird"){
	// 	for(int i = 0; i < 10; i++){
	// 		Boid array = new Boid();
	// 	}
	// }else if(type == "fish"){
	// 	for(int i = 0; i < 10; i++){
	// 		Boid array = new Boid();
	// 	}
	// }
	Object *array[flockNum];


	int height = 30;
	int width = 100;

	char ch;
	int frameCount = 0;

	initscr();
	halfdelay(1);
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

			steerWithinBounds(array,flockNum,width,height);
			steerTowardsCentre(array,flockNum,0.03);
			avoidOtherObjects(array,flockNum,0.01);
			matchVelocity(array,flockNum,0.01);





			for(int i = 0; i < flockNum; i++){
				array[i].setDirection(frameCount);
				array[i].updatePos();
				array[i].keepInBounds(width,height);

				mvaddch(array[i].getY(), array[i].getX(), array[i].getDirection());
			}

			frameCount++;
			move(height,width);

			ch = getch();
		}
	}


	endwin();

	delete[] array;
	return 0;
}
