// mrsprinttree.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/*
Matthew Salazar
ITSE-1307 Spring 2019
20190409

	  This program will print a five row tree of '*' with a trunk of one '*'.

	  Pseudo Code:
			   1. Tree - for (int intRow = 1; intRow < intpTreesize; intRow++)
			   2. Tree - for (int intSpaces = 1; intSpaces <= intpTreesize - intRow; intSpaces++)
			   3. Tree - for (int intHeight = 1; intHeight <= intWidth; intHeight++)
			   4. Trunk - for (int intSpaces = 1; intSpaces < intpTreesize; intSpaces++)
*/

#include "pch.h"
#include <iostream>
using namespace std;

void printTree(int intpTreesize) {
	
	//Tree
	int intWidth = 1;
	for (int intRow = 1; intRow < intpTreesize; intRow++) {	//Main loop to make the tree.
		for (int intSpaces = 1; intSpaces <= intpTreesize - intRow; intSpaces++) {	//Prints out the spaces for each row.
			cout << " ";
		}
		for (int intHeight = 1; intHeight <= intWidth; intHeight++) {	//Prints out the *'s for each row.
			cout << "*";
		}
		//cout << "*" << endl;
		intWidth += 2;
		cout << endl;
	}
	
	//Trunk
	for (int intSpaces = 1; intSpaces < intpTreesize; intSpaces++) {	//Prints out tree trunk.
		cout << " ";
	}
	cout << "*" << endl;
}


int main()
{
	int intTreeHeight = 5;

	do {
		cout << "Hey look, a tree! " << endl;
		cout << "Tree height = " << intTreeHeight << " *'s" << endl;
			printTree(intTreeHeight);

	} while (intTreeHeight != 5);
	
	return 0;
}


/*
	****My orginal work in class.****

	int intTreeHeight = 5;
	printTree(intTreeHeight);

	do {
		for (int intCount = 0; intCount < intTreeSize; intCount++) {
			cout << "*****" << endl;

			for (int intLineLength = 0; intLineLength < intTreeSize; intLineLength++)
			{
				cout << "*";
			}
		}
	} while (intTreeSize != 0);
	*/