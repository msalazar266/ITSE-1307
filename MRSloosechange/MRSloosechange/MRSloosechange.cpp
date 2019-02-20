// MRSloosechange.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/*
Matthew Salazar
ITSE-1307 Spring 2019
20190219
	  
		This program will count the change in your pocket by entering how much of each coins you have.
		
		Pseudo Code:
			   1. User entry for half dollars.
			   2. User entry for quarters.
			   3. User entry for dimes.
			   4. User entry for nickels.
			   5. User entry for pennies.
			   6. Total = (0.50 * AmountHalfDollar) + (0.25 * AmountQuarter) + (0.10 * AmountDime) + (0.05 * AmountNickel) + (0.01 * AmountPenny);
*/


#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	double dblHalfDollar = 0.50;
	double dblQuarter = 0.25;
	double dblDime = 0.10;
	double dblNickel = 0.05;
	double dblPenny = 0.01;
	double dblTotal = 0;
	int intAmountHalfDollar = 0;
	int intAmountQuarter = 0;
	int intAmountDime = 0;
	int intAmountNickel = 0;
	int intAmountPenny = 0;

	//This program will count the change in your pocket by entering how much of each coins you have.
	cout << "This program will calculate the total amount of coins you have." << endl;
	
	cout << "Please enter how many half dollars you have." << endl;	//Half dollars entry.
	cin >> intAmountHalfDollar;

	cout << "Please enter how many quarters you have." << endl;	//Quarters entry.
	cin >> intAmountQuarter;

	cout << "Please enter how many dimes you have." << endl;	//Dimes entry.
	cin >> intAmountDime;

	cout << "Please enter how many nickels you have." << endl;	//Nickels entry.
	cin >> intAmountNickel;

	cout << "Please enter how many pennies you have." << endl;	//Pennies entry.
	cin >> intAmountPenny;

	dblTotal = (dblHalfDollar * intAmountHalfDollar) + (dblQuarter * intAmountQuarter) + (dblDime * intAmountDime) + (dblNickel * intAmountNickel) + (dblPenny * intAmountPenny);	//Equation for counting.

	cout << "Your total amount of change is $" << dblTotal << endl;	//Total amount in dollars.

	return 0;

}
