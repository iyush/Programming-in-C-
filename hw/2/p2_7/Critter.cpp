/*
CH08-320142
Critter.cpp
Aayush Sharma Acharya
a.sharmaacharya@jacobs-university.de
*/

#include <iostream>
#include "Critter.h"

using namespace std;

void Critter::setName(string& newname) {
	name = newname;
}

void Critter::setHunger(int newhunger) {
	hunger = newhunger;
}

// new methods
void Critter::setColor(string& newcolor) {
  color = newcolor;
}
void Critter::setWeight(double newweight) {
  weight = newweight;
}

//modified print
void Critter::print() {
        cout << 
                "I am " 
                << 
                name 
                << 
                ". My hunger level is " 
                << 
                hunger 
                << 
                "." 
                << 
                " I am " 
                << 
                color 
                << 
                " in color. " 
                <<
                "I weigh " 
                << 
                weight 
                << 
                " grams." 
                << 
                endl;
}

int Critter::getHunger() {
	return hunger;
}

string Critter::getColor() {
	return color;
}

double Critter::getWeight() {
	return weight;
}
