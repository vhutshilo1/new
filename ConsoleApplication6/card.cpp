#include "card.h"
#include <iostream>
#include<string>


void card::set(int x, char y)
{
	letter = y;
	number = x;
}

char card::getlet()
{
	return letter;
}
int card::getnum() 
{
	return number;
}

