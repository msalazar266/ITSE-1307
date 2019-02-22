// mrsclasscalculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/*
Matthew Salazar
ITSE-1307 Spring 2019
20190221

		This program will calculate c = ab / a - b from two user inputs.

		Pseudo Code:
			   1. double A = 0;
			   2. double B = 0;
			   3. user input A
			   4. user input B
			   5. C = ((A * B) / A) - B;
			
*/


#include "pch.h"
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double dblA = 0;
	double dblB = 0;
	double dblC = 0;

	//This program will calculate c = ab / a - b from two user inputs.
	cout << "This program will calculate c = ab / a - b from two user inputs." << endl;

	cout << "Please enter the first decimal number for A: " << endl;	//First decimal number input.
	cin >> dblA;

	cout << "Please enter the second decimal number for B: " << endl;	//Second decimal number input.
	cin >> dblB;

	dblC = ((dblA * dblB) / dblA) - dblB;	//Math equation C = ((A * B) / A) - B.

	cout << "Your answer C is: " << setprecision(3) << dblC;	//Your answer displayed.

	return 0;

}
