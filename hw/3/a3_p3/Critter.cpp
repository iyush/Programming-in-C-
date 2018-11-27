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
        name = "critter";
        hunger = 0;
        boredom = 0;
        height = 10;
}

Critter::Critter(string newname){
        name = newname;
        hunger = 0.0;
        boredom = 0;
        height = 10;
}

Critter::Critter(string newname, 
                 int newhunger, 
                 int newboredom, 
                 double newheight){
        name = newname;
        hunger = intToDouble(newhunger);
        boredom = newboredom;
        height = newheight;
}


void Critter::setName(string newname) {
	name = newname;
}

void Critter::setHunger(int newhunger) {
	hunger = intToDouble(newhunger);
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
                << "Hunger: " << getHunger() << endl
                << "Boredom: " << boredom << endl
                << "height: " << height << endl
                << endl;
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
