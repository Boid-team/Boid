#include <sstream>
#include <ncurses.h>
#include <string>
#include <iostream>
#include <stdexcept>
#include "Object.h"
#include "Functions.cpp"

using namespace std;

int main(){

    int flockNum;
	int count = 0;//status of program
	string type;
	string inputNum;

    do{
        type = " ";
		cout << "Enter the type of Boid: (Bird / Fish): " << endl;
		cin >> type;

		if(type == "Bird" || type == "bird"){

			do{
					count = 0;
					cout << "Enter the number of Birds: " << endl;
					cin >> inputNum;


					try{//convert input number string into int. If stoi() throws an exception, catch and print error message. If successful, bring count to 2 and continue.
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

						cout << "Chosen object was " << type << " with " << flockNum << " members of the flock." << endl;


					}else{
						cout << "Try again!!! " << endl;
					}
				}while(flockNum < 0 || count != 2);

		}else if(type == "Fish" || type == "fish"){
			do{
					count = 0;
					cout << "Enter the number of Fish: " << endl;
					cin >> inputNum;

                    try{//convert input number string into int. If stoi() throws an exception, catch and print error message. If successful, bring count to 2 and continue.
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

                        cout << "Chosen object was " << type << " with " << flockNum << " members of the flock." << endl;



					}else{
						cout << "Try again!!! " << endl;
					}

				}while(flockNum <= 0 || count != 2);

		}else{
			cout << "Wrong input!!! TRY AGAIN!!!" << endl;
		}

	}while(type != "Fish" && type != "fish" && type != "Bird" && type != "bird");

}