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
	Fraction input1, input2;
	cout << "Enter the first fraction: " << endl;
	cin >> input1;

	cout << "Enter the second fraction: " << endl;
	cin >> input2;

	if (input1 > input2){
		cout<<"Input 1"<<input1<<" is greater after reduced form"<<endl;
	}else if (input2 > input1){
		cout<<"Input 2"<<input2<<" is greater after reduced form"<<endl;
	}else {
		cout << "Both the fractions are equal"<< endl;
	}
	cout << "Product: " << input1 * input2 << endl;
	cout << "Quotient: " << input1 / input2 << endl;
	cout << "Sum: " << input1 + input2 << endl;
	cout << "Difference: " << input1 - input2 << endl;
}
