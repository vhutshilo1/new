#include "card.h"
#include <iostream>
#include<string>





card::card(int x, char y)
{
	letter = y;
	number = x;
}
void card::set(int x, char y)
{
	letter = y;
	number = x;
}

char card::getlet()
{
	return letter;
}
int card::getnum() //
{
	return number;
}
ostream& operator<<(ostream& output, const card& param)
{
	
	output << param.number << ":"<<param.letter<<endl;
	return output;
}