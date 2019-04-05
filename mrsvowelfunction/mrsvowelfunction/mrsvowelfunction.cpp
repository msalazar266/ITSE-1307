// mrsvowelfunction.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/*
Matthew Salazar
ITSE-1307 Spring 2019
20190404
	 
	 This program will return the value true if a given character is a vowel and otherwise returns false.

	  Pseudo Code:
			   1. User inputs a letter.
			   2. switch {case 'a': case 'e': case 'i': case 'o': case 'u':}
			   3. if(vowel) true then is vowel or if(vowel) false not vowel.

*/

#include "pch.h"
#include <iostream>
using namespace std;

bool isVowel(char charpVowel)
{
	charpVowel = tolower(charpVowel);

	switch (charpVowel) {
	
	case 'a': case 'e': case 'i': case 'o': case 'u':
		return true;
		break;

	default:
		return false;
	}
}

int main()
{
	char charVowel = ' ';

	cout << "Please enter a letter to see if it is a vowel." << endl;
	cin >> charVowel;
	cout << endl;

	if (isVowel(charVowel)) {
		cout << "Your letter " << charVowel << " is a vowel!" << endl;
	}
	else {
		cout << "Your letter " << charVowel << " is NOT a vowel!" << endl;
	}

	return 0;
}