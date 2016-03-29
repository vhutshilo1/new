#ifndef card_H
#define card_H
#include <iostream>
#include<string>
using namespace std;

class card
{
public:
private:
	int number;
	char letter;

public:
	card(int = 0, char = ' ');//
	
	void set(int , char );
		int getnum( );
		char getlet();
friend ostream& operator<<(ostream&, const card&);
	//~card();
};

//
#endif
