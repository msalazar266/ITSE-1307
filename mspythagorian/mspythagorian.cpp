// mspythagorian.cpp : Defines the entry point for the console application.
//
/*
Matthew Salazar
ITSE-1307 Spring 2019
20190207

      This program compute the variable 'c' for the Pythagorian Theorem.

   Pseudo Code:
   
*/

#include "stdafx.h"
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
   int intA = 0;
   int intB = 0;
   double dblC = 0;
   
   //This program will compute the variable 'c' for the Pythagorian Theorem
   cout << "This program will compute the variable 'c' for the Pythagorian Theorem." << endl;
   
   cout << "Enter the length for side A" << endl;
   cin >> intA;

   cout << "Enter the length for side A" << endl;
   cin >> intB;

   dblC = sqrt((intA * intA) + (intB * intB));

   cout << "The length of side C = " << dblC << endl;
   
   return 0;

}

