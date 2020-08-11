#include <iostream>
#include <string>

extern void print_class(std::string[4], std::string[], int[][4],int);

int main(){
	std::string courses[4] = {"Math","Physics","Chemistry","Biology"};
	std::string students[] = {"Alice","Bob", "Chris","Joe"};
	int report_card[4][4] = {{7,6,7,6},{5,6,7,4},{4,5,2,3},{5,6,3,2}};

	print_class(courses,students,report_card,4);
}