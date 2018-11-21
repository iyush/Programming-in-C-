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
		cout << "Please enter data: " << endl;
		cout << "Name: ";
		getline(cin, name);
		c.setName(name);
		cout << "Hunger: ";
		cin >> hunger;
		c.setHunger(hunger);

		cout << "You have created:" << endl;
		c.print();
		return 0;
}
