
#include <sstream>
#include <ncurses.h>
#include <string>
#include <iostream>
#include "Object.h"
#include "Bird.h"
#include "Fish.h"
#include "Functions.cpp"


using namespace std;


int main(){

	int flockNum;
	int count = 0;//status of program
	string type;
	string inputNum;

	Object ** array = new Object*[1];


	//Begin user input
	do{
        type = " ";
		cout << "Enter the type of Boid: (Bird / Fish): " << endl;
		cin >> type;

		if(type == "Bird" || type == "bird"){

			do{
					count = 0;
					cout << "Enter the number of Birds: " << endl;
					cin >> inputNum;

					//convert input number string into int. If stoi() throws an exception, catch and print error message.
					//If successful, check for illegal numbers, and change status of program if everything is fine
					try{
                        flockNum = stoi(inputNum);
                        if(flockNum <= 0){
                            cout << "Illegal number of birds!" << endl;
                        }else{
                            count = 2;
                        }
                    }catch(invalid_argument& e){
                        cout << "Invalid number." << endl;
                    }

					if(flockNum > 0 && count == 2){

						array[0] = new Bird[flockNum];


					}else{
						cout << "Try again!!! " << endl;
					}
				}while(flockNum < 0 || count != 2);

		}else if(type == "Fish" || type == "fish"){
			do{
					count = 0;
					cout << "Enter the number of Fish: " << endl;
					cin >> inputNum;

					//convert input number string into int. If stoi() throws an exception, catch and print error message.
					//If successful, check for illegal numbers, and change status of program if everything is fine
                    try{
                        flockNum = stoi(inputNum);
                        if(flockNum <= 0){
                            cout << "Illegal number of fish!" << endl;
                        }else{
                            count = 2;
                        }
                    }catch(invalid_argument& e){
                        cout << "Invalid number." << endl;
                    }


					if(flockNum > 0 && count == 2){

                        array[0] = new Fish[flockNum];
                        for(int i = 0; i < flockNum; i++){
                        	array[0][i].setMaxX(4);
                        	array[0][i].setMaxY(2);
                        }



					}else{
						cout << "Try again!!! " << endl;
					}

				}while(flockNum <= 0 || count != 2);

		}else{
			cout << "Wrong input!!! TRY AGAIN!!!" << endl;
		}

	}while(type != "Fish" && type != "fish" && type != "Bird" && type != "bird");
	//end user input

	char ch;
	int frameCount = 0;
	int height = 30;
	int width = 100;

	initscr();
	halfdelay(2);



	float centeringSteerFactor = 0.03;
	float avoidSteerFactor = 0.01;
	float aligningSteerFactor = 0.01;

	while(1){
		if(ch == 'q' | ch == 'Q'){//quit program
			break;
		}if(ch == 'w' | ch == 'e' | ch == 'r' | ch == 's' | ch =='d' | ch == 'f' | ch == 'p'){//Increase/decrease factors or restart simulation
			switch(ch){
				case 'w':
					centeringSteerFactor += 0.01;
					break;
				case 's':
					centeringSteerFactor -= 0.01;
					break;
				case 'e':
					avoidSteerFactor += 0.01;
					break;
				case 'd':
					avoidSteerFactor -= 0.01;
					break;
				case 'r':
					aligningSteerFactor += 0.01;
					break;
				case 'f':
					aligningSteerFactor -= 0.01;
					break;
				case 'p':
					restartBoids(array[0],flockNum);
					break;
			}
			ch = '.';
		}else{
		//draw frame of boid screen
		clear();
		move(0,0);
		hline('-',width);
		move(0,width);
		vline('|',height);
		move(height,0);
		hline('-',width);

		//run rule set
		steerWithinBounds(array[0],flockNum,width,height);
		steerTowardsCentre(array[0],flockNum,centeringSteerFactor);
		avoidOtherObjects(array[0],flockNum,avoidSteerFactor);
		matchVelocity(array[0],flockNum,aligningSteerFactor);


		for(int i = 0; i < flockNum; i++){
			//final boid updates to postion and sprite
			array[0][i].setDirection(frameCount);
			array[0][i].updatePos();
			array[0][i].keepInBounds(width,height);

			//draw each boid
			mvaddch(array[0][i].getY(), array[0][i].getX(), array[0][i].getDirection());
		}

		//print instructions
		mvprintw(0,130,"Instructions:");
		mvprintw(1,130, "Increase/Decrease centering factor with w/s");
		mvprintw(2, 130, "Current factor: %0.2f", centeringSteerFactor);
		mvprintw(4, 130, "Increase/Decrease avoiding factor with e/d");
		mvprintw(5,130,"Current factor: %0.2f", avoidSteerFactor);
		mvprintw(7,130,"Increase/Decrease velocity matching factor with r/f");
		mvprintw(8,130,"Current factor: %0.2f", aligningSteerFactor);
		mvprintw(10,130,"Restart simulation with p");
		mvprintw(11,130,"Quit simulation with q");

		//cleanup of screen
		frameCount++;
		move(height,width);

		ch = getch();

		}
	}
	//program cleanup
	endwin();
	delete[] array[0];
	delete[] array;

	return 0;
}


