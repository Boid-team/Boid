#include <sstream>
#include <ncurses.h>
#include "Object.h"
#include "Bird.h"
#include "Fish.h"
#include "Functions.cpp"
#include <string>
#include <iostream>

using namespace std;

int main(){
    Object ** array = new Object* [1];;

    int n = 5;

    string choice = "Fish";

    if(choice == "Fish"){
        array[0] = new Fish[n];

        for(int i = 0; i < n; i++){
            cout << "line 23" << endl;
            array[0][i].setMaxX(5);
            cout << "line 25" << endl;
            array[0][i].setMaxY(5);
            cout << "line 27" << endl;
        }

    }else if(choice == "Bird"){
        array[0] = new Bird[n];
    }


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

    // 		steerWithinBounds(array,flockNum,width,height);
    // 		steerTowardsCentre(array,flockNum,0.03);
    // 		avoidOtherObjects(array,flockNum,0.01);
    // 		matchVelocity(array,flockNum,0.01);

    	    for(int i = 0; i < n; i++){
    			array[0][i].setDirection(frameCount);
    			array[0][i].updatePos();
    			array[0][i].keepInBounds(width,height);

    			mvaddch(array[0][i].getY(), array[0][i].getX(), array[0][i].getDirection());
        	}

    		frameCount++;
	    	move(height,width);
	    	ch = getch();

    	}
	}

	endwin();
	delete[] array[0];
	delete[] array;
    return 0;
}