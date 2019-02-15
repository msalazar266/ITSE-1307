// mspythagorean.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/*
Matthew Salazar
ITSE-1307 Spring 2019
20190214
	  
	  This program compute the variable 'C' for the Pythagorean Theorem.
   
	  Pseudo Code:
				 1. Prompts user for side A
				 2. Prompts user for side B
				 3. sqrt((A * A) + (B * B))
				 4. Display answer

*/

#include "pch.h"
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int intSideA = 0;
	int intSideB = 0;
	double dblSideC = 0;

	//This program will compute the variable 'c' for the Pythagorean Theorem
	cout << "This program will compute the variable 'C' for the Pythagorean Theorem." << endl;

	cout << "Enter the length for side A" << endl;		//Prompts user for side A
	cin >> intSideA;

	cout << "Enter the length for side B" << endl;		//Prompts user for side B
	cin >> intSideB;

	dblSideC = sqrt((intSideA * intSideA) + (intSideB * intSideB));		//Pythagorean equation

	cout << "The length of side C = " << dblSideC << endl;		//Answer displayed

	return 0;

}
