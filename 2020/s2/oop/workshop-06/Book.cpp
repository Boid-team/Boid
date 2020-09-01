#include <iostream>
#include "Book.h"
using namespace std;

Book::Book(){
	name = "Default name";
	copies = 1;
	borrowed = 0;
}

Book::Book(string input_name){
	name = input_name;
	copies = 1;
	borrowed = 0;
}

Book::Book(string input_name, int input_copies){
	name = input_name;
	name = input_copies;
	borrowed = 0;

}

void Book::borrow_book(int input_number){
	if(input_number < copies - borrowed){
		borrowed += input_number;
	}else{
		cout << "Number of borrowed books exceeded, did you mean to do that?" << endl;
	}
}

void Book::return_book(int input_number){
	if(input_number <= borrowed){
		borrowed -= input_number;
	}else{
		cout << "Number of returned books exceeded, did you mean to do that?" << endl;
	}
}

string Book::get_name(){
	return name;
}

int Book::get_copies(){
	return copies;
}

int Book::get_borrowed(){
	return borrowed;
}

Book::~Book(){

}