#include <iostream>
#include "Book.h"
using namespace std;

Book::Book(){
	name = "Default name";
	copies = 1;
}

Book::Book(string input_name){
	name = input_name;
	copies = 1;
}

Book::Book(string input_name, int input_copies){
	name = input_name;
	name = input_copies;
}

void Book::borrow_book(int input_number){
	if(input_number < copies - borrowed){
		borrowed += input_number;
	}
}

void Book::return_book(int input_number){
	if(input_number <= borrowed){
		borrowed -= input_number;
	}
}

Book::~Book(){

}