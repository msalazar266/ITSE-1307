// mrstelephonedigits.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/*
Matthew Salazar
ITSE - 1307 Spring 2019
20190402
			This program outputs telephone digits that correspond to uppercase letters.

			Pseudo Code :
			1. User inputs numbers and or letters
			2. if(a, b, or c), cout << "2"....etc.
			3. if invalid character input, cout << "Invalid character"

*/

#include "pch.h"
#include <iostream>
#include <string>
using namespace std;


int main()
{
	string strInput = "";
	char chrLetter = ' ';

	cout << "This program outputs telephone digits that correspond to uppercase letters.\n" << endl;
	cout << "Please input something(letters and/or digits): ";
	cin >> strInput;	//User inputs something
	cout << endl << endl;

	cout << strInput << " is ";
	for (unsigned int intLetter = 0; intLetter < strInput.length(); intLetter++) { // Checks each char

		chrLetter = strInput.at(intLetter);
		chrLetter = tolower(chrLetter);

		switch (chrLetter) {	//The corresponding digits is chosen
		
		case '1':	//User input 1
			cout << "1";
			break;
		
		case '2': case 'a': case 'b': case 'c':	//User input2, a, b, or c
			cout << "2";
			break;
		
		case '3': case 'd': case 'e': case 'f':	//User input 3, d, e, or f
			cout << "3";
			break;
		
		case '4': case 'g': case 'h': case 'i':	//User input 4, g, h, or i
			cout << "4";
			break;
		
		case '5': case 'j': case 'k': case 'l':	//User input 5, j, k, or l
			cout << "5";
			break;
		
		case '6': case 'm': case 'n': case 'o':	//User input 6, m, n, or o
			cout << "6";
			break;
		
		case '7': case 'p': case 'q': case 'r': case 's':	//User input 7, p, q, r, or s
			cout << "7";
			break;
		
		case '8': case 't': case 'u': case 'v':	//User input 8, t, u, or v
			cout << "8";
			break;
		
		case '9': case 'w': case 'x': case 'y': case 'z':	//User input 9, w, x, y, or z
			cout << "9";
			break;
		
		case '0':	//User input 0
			cout << "0";
			break;
		
		default:	//User input an invalid character
			cout << ". ERROR: Invalid Character(s) " << "'" << strInput.at(intLetter) << "'" << ", " << endl;
			cout << endl << endl;
		}
	}
}
