// mrslettergradeconversion.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/*
Matthew Salazar
ITSE-1307 Spring 2019
20190319

	  This program will convert a double into an int, then displays the equivalent letter grade.

	  Pseudo Code:
			   1. double dblGrade = 0.00;
			   2. intGrade = int(dblGrade);
			   3. cin >> intGrade;
			   4. if (intGrade > x), display letter grade.
			   5. switch (intGrade / 10), display leter grade.
*/

#include "pch.h"
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
		//Main program which includes output using if and switch staements.
		double dblGrade = 0.00;	//double variable used for cin.
		int intGrade = int(dblGrade);	//cin input is converted into an int using a typecast.

		cout << "This program will convert your number grade into a letter grade.\n\n";	//Title for looks.

		cout << "Please enter your number grade(0-100): ";	//Promting user for input.
		cin >> intGrade;
		
		cout << "" << endl;	//Empty line, for looks.
		
		cout << "if statement: ";	//Grade displayed using the if statement.
		
		if (intGrade > 89)	//Grade greater than 89 is an A.
		{
			cout << "Your "<< intGrade << " = A\n" << endl;
		}

			else if (intGrade > 79)	//Grade greater than 79 is an B.
			{
				cout << "Your " << intGrade << " = B\n" << endl;
			}

			else if (intGrade > 69)	//Grade greater than 69 is an C.
			{
				cout << "Your " << intGrade << " = C\n" << endl;
			}

			else if (intGrade > 59)	//Grade greater than 59 is an D.
			{
				cout << "Your " << intGrade << " = D\n" << endl;
			}

			else if (intGrade < 60)	//Grade less than 60 is an F.
			{
				cout << "Your " << intGrade << " = F\n" << endl;
			}


		cout << "switch statement: ";	//Grade displayed using the switch statement.
		
		switch (intGrade / 10) {	//Divides the converted intGrade by 10 to simplify the switch.

			case 9:	//Grade greater than 89 is an A.
				cout << "Your " << intGrade << " = A\n" << endl;
				break;

			case 8:	//Grade greater than 79 is an B.
				cout << "Your " << intGrade << " = B\n" << endl;
				break;

			case 7:	//Grade greater than 69 is an C.
				cout << "Your " << intGrade << " = C\n" << endl;
				break;

			case 6:	//Grade greater than 59 is an D.
				cout << "Your " << intGrade << " = D\n" << endl;
				break;

			default:	//Grade less than 60 is an F.
				cout << "Your " << intGrade << " = F\n" << endl;
				break;
	
		}

	return 0;
}
