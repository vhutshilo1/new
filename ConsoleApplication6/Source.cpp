#include <iostream>
#include <string>
#include "card.h"
using namespace std;


int main(int argc, char *argv[]) {

	card myCard( 8, 'M');									// instantiate card class. 

	cout << "My card is " << myCard << endl;			// demonstrate overloaded stream insertion operator

	myCard.set(10, 30);									// change the card number and letter

											
	

	myCard.getnum();
	myCard.getlet();               

	cout << "My card has number" << number << " and letter " << letter;   // display values in another format

}