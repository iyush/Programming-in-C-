/*
CH08-320142
testcritter.cpp
Aayush Sharma Acharya
a.sharmaacharya@jacobs-university.de
*/

#include <iostream>
#include <cstdlib>
#include "Critter.h"

using namespace std;

int main(int argc, char** argv)
{
	Critter c;

	string name;
	int hunger;
	//new variable declearation
	string color;
	double weight;

	cout << endl << "Please enter data: " << endl;
	cout << "Name: ";
	// cin >> name; will not work if name contains
	// spaces
	getline(cin, name);
	c.setName(name);
	cout << "Hunger: ";
	cin >> hunger;
	c.setHunger(hunger);

	cout << "Color: ";
	cin >> color;
	c.setColor(color);

	cout << "Weight (in grams): ";
	cin >> weight;
	c.setWeight(weight);
	cout << "You have created:" << endl;
	c.print();
	return 0;
}
