// mrssumofdigits.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/*
Matthew Salazar
ITSE-1307 Spring 2019
20190326

	  This program will calculate the sum of an integer.

	  Pseudo Code:
			   1. Ask user for input.
			   2. while (intValue != 0)
			   3. intSum = intSum + intValue % 10;
			   4. intValue = intValue / 10;

*/

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int intValue = 0;
	int intNumber = 0;
	int intSum = 0;

	cout << "This program will give you the sum of digits in the entered number.\n"; //Description.
	cout << "Please enter your number: ";	//User input for number.
	cin >> intNumber;

	intValue = intNumber;	//Sets intValue to intNumber for the math.

	while (intValue != 0) {	//Math. Breaks down number from right to left using modulo.

		intSum = intSum + intValue % 10;
		
		intValue = intValue / 10;

	}

	cout << "Your number: " << intNumber << "\n" << endl;	//Shows your number.
	
	cout << "The sum of the digits of " << intNumber << " is " << intSum;	//Shows the sum of the digits.

	return 0;
}
