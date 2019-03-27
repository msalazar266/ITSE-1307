// mrshighlow.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
//
//
/*
	Pick a random number.
	Have the user guess the number.
	Display output based on users guess.
	Repeat asking for users guess until it is equal to random number.
	Display winning if user guessed random number.
*/

#include "pch.h"
#include <iostream>
#include <time.h>
using namespace std;

int main()
{
	srand(time(NULL)); //Get random time

	int intLimit = 1; //Set limit for guess

	int intGuess = rand() % intLimit + 1; //Give me a number between 0 and 51 then add 1.

	int intCurrentGuess = 1;
	int intTries = 10;	//Added a 10 try limit. MRS

	cout << "Please set the max range: "; //Added user input for max range. MRS
	cin >> intLimit;	//Added user input for max range. MRS

	do { //Not equal to guess
	
		do { //User Input
			cout << "Please enter a number between 1 and " << intLimit << ": ";
			cin >> intCurrentGuess;
		} while (intCurrentGuess < 1 || intCurrentGuess > intLimit);

		if (intTries == 0) {	//Added a 10 try limit. MRS
			cout << "You ran out of tries and died!(lol)" << endl;
			break;
		}

		if (intCurrentGuess > intGuess) {
			cout << "You guessed to high!" << endl;
			cout << "You have " << intTries << " left.." << endl;	//Added a 10 try limit.  MRS
			intTries--;	//Added a 10 try limit. MRS
		}
		else if (intCurrentGuess < intGuess) {
			cout << "You guessed to low!" << endl;
			cout << "You have " << intTries << " left.." << endl;	//Added a 10 try limit. MRS
			intTries--;	//Added a 10 try limit. MRS
		}
		else {
			cout << "You guessed wisely! Congrats YOU WIN NOTHING!" << endl;
		}

	} while (intCurrentGuess != intGuess);

	return 0;

}
