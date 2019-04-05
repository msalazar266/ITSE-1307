// mrspalindrome.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/*
Matthew Salazar
ITSE-1307 Spring 2019
20190404
	 
	 This program will check if a string input is a palindrome.

	  Pseudo Code:
			   1. Input a string
			   2. for (int intCount = 0; intCount < intLength / 2; intCount++)
			   3. if (strInput[intCount] != strInput[intLength - 1 - intCount])
			   4. string is palindrome or string is not palindrome.
*/

#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string strInput;

	cout << "Please input to test for a palindrome." << endl;
	cin >> strInput;

	int intLength = strInput.length();
	for (int intCount = 0; intCount < intLength / 2; intCount++) {
		
		if (strInput[intCount] != strInput[intLength - 1 - intCount]) {
			cout << strInput << " is not a palindrome!";
			return false;
		}
		cout << strInput << " is a palindrome!";
	return true;
	}

	return 0;
}
