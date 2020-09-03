#ifndef _MEERKAT_H__
#define _MEERKAT_H__

#include <string>
using namespace std;

class meerkat{
	string name;
	int age;
public:
	meerkat();
	void setName(string);
	string getName();
	void setAge(int);
	int getAge();
	~meerkat();
};

#endif

#ifndef _CARTS_H__
#define _CARTS_H__

#include <string>
#include <vector>
using namespace std;

class cart{
	int capacity;
	// vector<meerkat> meerkats {};
	meerkat passengers[4];
	static int count;
public:
	cart();
	bool addMeerkat(meerkat);
	void emptyCart();
	void printMeerkats();
	int getCount();

};

#endif