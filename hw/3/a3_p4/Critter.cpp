/*
CH08-320142
Critter.cpp
Aayush Sharma Acharya
a.sharmaacharya@jacobs-university.de
*/

#include <iostream>
#include "Critter.h"

using namespace std;

double Critter::intToDouble(int x){
        return x/10.0;
}
double Critter::doubleToInt(double x){
        return x*10;
}

Critter::Critter(){
        cout << "Empty Constructor called!" <<endl;
        name = "critter";
        hunger = 0.0;
        boredom = 0;
        height = 10;
}

Critter::Critter(string newname){
        cout << "Constructor with only name and default height 10" << endl;
        name = newname;
        hunger = 0.0;
        thirst = hunger;
        boredom = 0;
        height = 10;
}

Critter::Critter(string newname, 
                 int newhunger, 
                 int newboredom, 
                 double newheight){
        cout << "All but thirst constructor" << endl;
        name = newname;
        hunger = intToDouble(newhunger);
        thirst = hunger;
        boredom = newboredom;
        height = newheight;
}

Critter::Critter(string newname, 
                 int newhunger, 
                 int newboredom, 
                 double newheight, 
                 double newthirst){
        cout << "All parameters constructor" << endl;
        name = newname;
        hunger = newhunger;
        thirst = newthirst;
        boredom = newboredom;
        height = newheight;
}


void Critter::setName(string& newname) {
	name = newname;
}

void Critter::setHunger(int newhunger) {
	hunger = newhunger;
        thirst = hunger;        //set to the same level as hunger.
}

void Critter::setBoredom(int newboredom) {
	boredom = newboredom;
}

void Critter::setHeight(double newheight) {
	height = newheight;
}
void Critter::print() {
  std::cout 
          << "Name: " << name << endl
          << "Hunger: " << hunger << endl
          << "Boredom: " <<  boredom << endl
          << "Height: "  << height << endl
          << "Thirst: " << thirst <<endl
          << std::endl;
}


string Critter::getName() {
	return name;
}

double Critter::getHunger() {
	return doubleToInt(hunger);
}


int Critter::getBoredom() {
	return boredom;
}

double Critter::getHeight() {
	return height;
}
