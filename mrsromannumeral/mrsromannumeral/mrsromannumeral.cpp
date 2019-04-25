// mrsromannumeral.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/*
Matthew Salazar
ITSE - 1307 Spring 2019
20190423

			This program will convert roman numerals to regular numbers.
			
			Pseudo Code :
			1. Ask user to enter a Roman Numeral.
			2. Ask user for input to get decimal or Roman Numeral form.
			3. Return decimal value or return Roman Numeral value.

*/
#include "pch.h"
#include <iostream>
#include <string>
#include "romanType.h"

int main() {
	
	romanType objNumeral;
	std::string strNumeral = "";
	char chrChoice = ' ';

	//Ask user to enter a Roman Numeral.
	std::cout << " Please enter a Roman Numeral: " << std::endl;
	std::cin >> strNumeral;
	objNumeral.set(strNumeral);
	std::cout << std::endl;

	//Ask user for input to get decimal or Roman Numeral form.
	do {
		std::cout << "Do you want the Roman Numeral or the Decimal?" << std::endl;
		std::cout << "Press [D] for Decimal!" << std::endl << "Press [R] for Roman Numeral!" << std::endl;
		std::cin >> chrChoice;
		chrChoice = tolower(chrChoice); 

			switch (chrChoice) {
			//Return decimal value.
			case 'd':
				std::cout << objNumeral.getValue() << std::endl;
				break;
			//Return Roman Numeral value.
			case 'r':
				std::cout << strNumeral << std::endl;
				break;

			default:
				std::cout << "No..." << std::endl;
				
				break;
			}

	}	while (chrChoice != 'd' && chrChoice != 'r');
	
	return 0;
}
