// mrsprimenumbers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/*
Matthew Salazar
ITSE-1307 Spring 2019
20190402

	  This program will output all prime numbers from 0 to 10000.

	  Pseudo Code:
			   1. For loop ending at 10000. (num = 2; num <= 10000; num++)
			   2. For loop to check number. for(check = 2; check <= num; check++)
			   3. Modulo. num % check
			   4. Display prime numbers. cout << num << ", ";

*/

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int intMaxLimit = 10000;
	int intPrimeNumber = 0;
	int intPrimeCheck = 0;
	int intPrimeCount = 0;

	for (intPrimeNumber = 2; intPrimeNumber <= intMaxLimit; intPrimeNumber++) {

		intPrimeCount = 1;

		for (intPrimeCheck = 2; intPrimeCheck <= intPrimeNumber / 2; intPrimeCheck++) {

			if (intPrimeNumber % intPrimeCheck == 0) {

				intPrimeCount = 0;
				break;
			}
		}
		if (intPrimeCount == 1) {
		cout << intPrimeNumber << ", ";
		
		}
	}
	cout << "\n\nThese are all prime the numbers from 0 to 10000." << endl;
}