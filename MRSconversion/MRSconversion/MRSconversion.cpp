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
using namespace std;

int main()
{
	double dblMile = 0;
	double dblKilo = 0;

	//This program will convert miles to kilometers
	cout << "This program will convert miles to kilometers." << endl;
	cout << "" << endl; //Empty line

	cout << "Please enter the distance in miles: " << endl;
	cin >> dblMile; //User inputs a distance in miles

	dblKilo = dblMile * 1.609; //Conversion math
	cout << "" << endl; //Empty line

	cout << dblMile << " miles(s) = " << dblKilo << " kilometer(s)." << endl; //Answer in kilometers

	return 0;

}
