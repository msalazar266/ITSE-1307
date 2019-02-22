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
			   %. C = ((A * B) / A) - B; 
			
*/


#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	double dblA = 0;
	double dblB = 0;
	double dblC = 0;

	cout << "This program will calculate c = ab / a - b from two user inputs" << endl;

	cout << "Please enter the first number: " << endl;
	cin >> dblA;

	cout << "Please enter the second number: " << endl;
	cin >> dblB;

	dblC = ((dblA * dblB) / dblA) - dblB;

	cout << "Your answer is: " << dblC;

	return 0;

}
