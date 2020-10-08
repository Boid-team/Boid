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

	Object boid = Object();
	boid.setDx(1);
	boid.setDy(0);
	boid.setX(5);
	boid.setY(10);
	boid.setDirection();


	
	// while(running == true){

	// 	for(int i =0; i < 10; i++){

	// 		array[i].checkEdges();
	// 		array[i].checkCoherence();
	// 		array[i].checkSeparation();
	// 		array[i].checkAlignment();

	// 		array[i].updatePos();
	// 		draw(array[i].gety, array[i]. getx);
	// 	}
	// }
	char ch;
	int i = 0;
	initscr();
	halfdelay(1);
	while(1){
		if(ch == 'q' | ch == 'Q'){
			break;
		}else{

			boid.updatePos();
			boid.setDirection();

			mvaddch(boid.getY(), boid.getX(), boid.getDirection());
			
			

			ch = getch();
			clear();
		}
	}


	endwin();
	return 0;
}