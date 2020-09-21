#include <ncurses.h>
#include "Object.h"
using namespace std;
int main(){

	cout << "enter type of boid: " << endl;
	cin >> type;

	if(type == "bird"){
		for(int i = 0; i < 10; i++){
			Boid array = new Boid();
		}
	}else if(type == "fish"){
		for(int i = 0; i < 10; i++){
			Boid array = new Boid();
		}
	}
	initscr();
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
	while(1){
		if(ch == 'q' | ch == 'Q'){
			break;
		}else{

			
			
			ch = getch();
			clear();
		}
	}


	endwin();
	return 0;
}