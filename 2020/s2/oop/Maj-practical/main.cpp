
#include <sstream>
#include <ncurses.h>
#include "Object.h"
#include "Bird.h"
#include "Functions.cpp"
#include <string>
#include <iostream>

using namespace std;
bool isNumeric(string str);

int main(){

	int n;
	int count = 0;
	string type;
	string str;

	do{
		cout << "Enter the type of Boid: (Birds / Fish): " << endl;
		cin >> type;

		if(type == "Birds" || type == "birds"){

			do{

					cout << "Enter the number of Birds to fly: " << endl;
					cin >> n;

					stringstream ss;
					ss << n;
					ss >> str;

					if (isNumeric(str)){
						count = 2;
				   }
					 else{
					    cout << "" << endl;
					}

					if(n > 0 && count == 2){
						Object *array = new Bird[n];

						for(int i = 0; i < n; i++){
							// array[i].setX(i*5);
							// array[i].setY(i*2);
							array[i].setDy(1.5);
							array[i].setDx(3);
						}

						char ch;
						int i = 0;

						initscr();
						halfdelay(2 );

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

							stayWithinBounds(array,n,100,30);
							steerTowardsCentre(array,n);

							for(int i = 0; i < n; i++){
								// array[i].checkIfSpeeding();
								array[i].setDirection();
								array[i].updatePos();
								// mvprintw(i,115,"x pos: %f", array[i].getDx());
								mvaddch(array[i].getY(), array[i].getX(), array[i].getDirection());
							}

							mvaddch(getAverageY(array,n,&array[1]), getAverageX(array,n,&array[1]),'o');

							// mvprintw(0,115,"0's ID: %d",array[0].getID());
							// mvprintw(1,115,"average x against 2: %d",getAverageX(array,n,&array[2]));
							// mvprintw(2,115,"x of 2: %d", array[2].getDx());
							i++;
							move(height,width);
							 //mvprintw(1,1,"%d",i);

							// refresh();
							ch = getch();

							}
						}

						endwin();
						delete[] array;

					}else{
						cout << "The number you have entered is less than 0:Enter a " << endl;
						cout << "Try again!!! " << endl;
					}

				}while(n < 0 || count != 2);

		}else if(type == "Fish" || type == "fish"){
			cout << "You entered Fish" << endl;

		}else{
			cout << "Wrong input!!! TRY AGAIN!!!" << endl;
		}

	}while(type != "Fish" && type != "fish" && type != "Bird" && type != "bird");


return 0;
}

bool isNumeric(string str){

   for (int i = 0; i < str.length(); i++)
      if (isdigit(str[i]) == false)
      return false; //when one non numeric value is found, return false
   return true;
}
