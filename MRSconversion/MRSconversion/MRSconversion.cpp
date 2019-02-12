// MRSconversion.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/*
Matthew Salazar
ITSE-1307 Spring 2019
20190212

	  This program will convert kilometers to miles.

	  Pseudo Code:
			   1. Ask user for kilometer distance.
			   2. miles = kilos * 0.6215;
			   3. Display answer in miles.

*/

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	double dblKilo = 0;
	double dblMile = 0;

	//This program will convert kilometers to miles
	cout << "This program will convert kilometers to miles." << endl;
	cout << "" << endl; //Empty line

	cout << "Please enter the distance in kilometers: " << endl;
	cin >> dblKilo; //User inputs a distance in kilometers

	dblMile = dblKilo * 0.6215; //Conversion math
	cout << "" << endl; //Empty line

	cout << dblKilo << " kilometer(s) = " << dblMile << " mile(s)." << endl; //Answer in miles

	return 0;

}