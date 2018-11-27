/*
CH08-320142
a3 p2.cpp
Aayush Sharma Acharya
a.sharmaacharya@jacobs-university.de
*/

#include <iostream>
#include "Critter.h"

using namespace std;

//constructors
Critter::Critter(){
        cout << "Empty Constructor called!" <<endl;
        name = "critter";
        hunger = 0;
        boredom = 0;
        height = 10;
}

Critter::Critter(string newname){
        cout << "Constructor with only name and default height 10" << endl;
        name = newname;
        hunger = 0;
        boredom = 0;
        height = 10;
}

Critter::Critter(string newname, 
                 int newhunger, 
                 int newboredom, 
                 double newheight){
        cout << "All parameters constructor" << endl;
        name = newname;
        hunger = newhunger;
        boredom = newboredom;
        height = newheight;
}

//setters
void Critter::setName(string& newname) {
	name = newname;
}

void Critter::setHunger(int newhunger) {
	hunger = newhunger;
}

void Critter::setBoredom(int newboredom) {
	boredom = newboredom;
}

void Critter::setHeight(double newheight) {
	height = newheight;
}

//getters
string Critter::getName() {
	return name;
}

int Critter::getHunger() {
	return hunger;
}

int Critter::getBoredom() {
	return boredom;
}

double Critter::getHeight() {
	return height;
}

//service
void Critter::print() {
        std::cout 
                << 
                "Name: "              << name << endl
                << "Hunger: "         << hunger << endl
                << "Boredom: "        << boredom << endl
                << "height: "         << height <<  endl 
                << endl;
}
