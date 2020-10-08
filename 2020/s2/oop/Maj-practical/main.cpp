#include <ncurses.h>
#include "Object.h"

int main(){

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
	for(int i = 0; i < flockNum; i++){
		*array[i] = new Object();
	}

	Object boid = Object();
	// boid.setDx(1);
	// boid.setDy(0);
	// boid.setX(5);
	// boid.setY(10);
	boid.setDirection();

	char ch;
	int i = 0;
	initscr();
	halfdelay(1);
	while(1){
		if(ch == 'q' | ch == 'Q'){
			break;
		}else{

			for(int i = 0; i < flockNum; i++){
				updateDirection(*Object);
				array[i] -> updatePos();
				mvaddch(array[i].getY(), array[i].getX(), array[i].getDirection());
			}

	
			ch = getch();
			clear();
		}
	}


	endwin();
	return 0;
}

void updateDirection(Object){
	
	stayWithinBounds(Object);
	flyTowardsCentre(Object);
	avoidOthers(Object);
	matchVelocity(Object);

}