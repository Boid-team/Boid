#include <ncurses.h>
#include <string.h>
using namespace std;

int main(){
	char mesg[] = "Enter a string:";
	char str[80];
	int row,col;

	initscr();
	halfdelay(1);
	getmaxyx(stdscr,row,col);
	char ch;
	int i = 0;
	while(1){
		if(ch == 'q' | ch == 'Q'){
			break;
		}else{

			
			i++;
			printw("%d",i);
			ch = getch();
			clear();
		}
	}


	endwin();
}