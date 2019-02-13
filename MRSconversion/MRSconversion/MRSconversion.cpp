// MRSconversion.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/*
Matthew Salazar
ITSE-1307 Spring 2019
20190212

	  This program will convert miles to kilometers.

	  Pseudo Code:
			   1. Ask user for miles distance.
			   2. kilo = mile * 1.609;
			   3. Display answer in kilometers.

*/

#include "pch.h"
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double dblMile = 0;
	double dblKilo = 0;

	//This program will convert miles to kilometers
	cout << "This program will convert miles to kilometers." << endl;
	cout << "" << endl;		//Empty line

	cout << "Please enter the distance in miles: ";
	cin >> dblMile;		//User inputs a distance in miles

	dblKilo = dblMile * 1.609;		//Conversion math
	cout << "" << endl;		//Empty line

	cout << setw(33) << setfill('*') << endl;
	cout << "" << endl;		//Empty line

	cout << setprecision(3) << dblMile << " miles(s) = " << dblKilo << " kilometer(s)." << endl;	//Answer in kilometers

	cout << setw(33) << setfill('*');
	cout << "" << endl;		//Empty line

	return 0;

}
