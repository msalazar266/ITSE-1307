// MRSbusinesscardwithoutput.cpp : Defines the entry point for the console application.
//
/*
Matthew Salazar
ITSE-1307 Spring 2019
20190226

		This program will output business card information into a virtual card.

		Pseudo Code:
				1. fileVCard.open("businesscard.vcf");
				2. Output card information
				3. fileVCard.close();
*/


#include "stdafx.h"
#include <iostream>
#include <fstream>
using namespace std;


int main()
{
	//Output stream to work with files.
	ofstream fileVCard;
	
	fileVCard.open("businesscard.vcf");	//All the card information.
	fileVCard << "BEGIN:VCARD" << endl;
	fileVCard << "N:Salazar;Matthew;;" << endl;
	fileVCard << "FN:Matthew Salazar" << endl;
	fileVCard << "TITLE:Programmer" << endl;
	fileVCard << "ORG:Mutt Dogg Games" << endl;
	fileVCard << "EMAIL:msalazar@muttdogggames.com" << endl;
	fileVCard << "TEL;CELL;VOICE:(617) 369 3266" << endl;
	fileVCard << "END:VCARD" << endl;
	
	fileVCard.close();
    return 0;
}
