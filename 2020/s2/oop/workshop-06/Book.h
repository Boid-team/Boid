#ifndef BOOK_H
#define BOOK_H

#include <string>
using namespace std;

class Book{
	//Class members
	string name;
	int copies;
	int borrowed;
public:
	
	//declarators
	Book();
	Book(std::string);
	Book(std::string, int);

	//functions
	void borrow_book(int); //borrow a book if borrowed number is less than number of copies - number of borrowed
	void return_book(int); //return a book if number returned is less than or equal to borrowed books

	string get_name();
	int get_copies();
	int get_borrowed();

	//destructor
	~Book();

};


#endif