#include <iostream>
#include <string>
#include "Book.h"

using namespace std;

int main(){
	Book catalog[5];
	string temp_name;
	int temp_copies;
	for(int i = 0; i < 5; i++){
		
		// cout << "Enter name of book: ";
		cin >> temp_name;
		// cout << endl << "Enter number of copies" << endl;
		cin >> temp_copies;

		catalog[i] = Book(temp_name, temp_copies);
		cout << catalog[i].get_name() << endl;
	}

	// cout << "Created a catalog of books with names: ";
	// for(int i = 0; i < 5; i++){
	// 	cout << (string)catalog[i].get_name() << endl;
	// }
	
}