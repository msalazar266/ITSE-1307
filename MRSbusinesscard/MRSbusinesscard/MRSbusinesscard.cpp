// MRSbusinesscard.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/*
Matthew Salazar
ITSE-1307 Spring 2019
20190207
	
	This program is designed to display a business card.
	
	Pseudo Code:
		Display card.
	*/

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	//This shows a business card with contact information
	cout << "***********************************************" << endl;
	cout << "* \t\t MuttDogg Games\t\t      *" << endl; //Displays business name
	cout << "* \t\t\t\t\t      *" << endl;
	
	cout << "* Matthew Salazar\t\t\t      *" << endl; //Displays my name
	cout << "* Programmer\t\t\t\t      *" << endl; //Displays my title
	cout << "* \t\t\t\t\t      *" << endl;
	
	cout << "* 617-369-3266 \t\t\t\t      *" << endl; //Displays phone number
	cout << "* msalazar@muttdogggames.com\t\t      *" << endl; //Displays email address
	cout << "***********************************************" << endl;
	
	return 0;
}
