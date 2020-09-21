#include <ncurses.h>
using namespace std;

int main(){

	initscr();

	move(23,10);
	mvaddstr(1,0,"^");

	refresh();

	getch();

	endwin();


	return 0;
}