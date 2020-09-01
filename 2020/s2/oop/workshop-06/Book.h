#ifndef BOOK_H
#define BOOK_H

#include <string>


class Book{
public:
	
	//declarators
	Book();
	Book(std::string);
	Book(std::string, int);


	//Class members
	std::string name;
	int copies;
	int borrowed = 0;

	//functions
	void borrow_book(int); //borrow a book if borrowed number is less than number of copies - number of borrowed
	void return_book(int); //return a book if number returned is less than or equal to borrowed books

	//destructor
	~Book();

};


#endif