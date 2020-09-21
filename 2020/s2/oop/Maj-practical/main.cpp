#include <ncurses.h>
#include "Boid.h"
using namespace std;
int main(){

	bool running = false;

	cin >> type;

	if(type == "bird"){
		for(int i = 0; i < 10; i++){
			Boid array = new Boid();
		}
		running = true;
	}else if(type == "fish"){

	}
	initscr();
	while(running == true){

		for(int i =0; i < 10; i++){

			array[i].checkEdges();
			array[i].checkCoherence();
			array[i].checkSeparation();
			array[i].checkAlignment();

			array[i].updatePos();
			draw(array[i].gety, array[i]. getx);
		}

		


	}
	endwin();
	return 0;
}