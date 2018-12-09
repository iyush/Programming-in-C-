/*
CH08-320142
testfraction.cpp
Aayush Sharma Acharya
a.sharmaacharya@jacobs-university.de
*/

#include <iostream>
#include <sstream>
#include "fraction.h"
#include <limits>

using namespace std;


int main(void)
{
	//Declearing the first and second factors
	Fraction input1, input2;
	cout << "Enter the first fraction: " << endl;
	cin >> input1;

	cout << "Enter the second fraction: " << endl;
	cin >> input2;

	//Overloaded Operations and Printing
	cout << "Product: " << input1 * input2 << endl;
	cout << "Quotient: " << input1 / input2 << endl;
}


