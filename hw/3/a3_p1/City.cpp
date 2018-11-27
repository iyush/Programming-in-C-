/*
CH08-320142
a3 p1.cpp
Aayush Sharma Acharya
a.sharmaacharya@jacobs-university.de
*/

#include <iostream>
#include "City.h"

using namespace std;

/* set methods */
void City::setName(string newname){
        name = newname;
}

void City::setPopulation(int newpopulation){
        population = newpopulation;
}

void City::setLocation(string newlocation){
        location = newlocation;
}


void City::setPoi(string newpoi){
        poi = newpoi;
}

/* Get methods */
string City::getName(){
        return name;
}

int City::getPopulation(){
        return population;
}

string City::getLocation(){
        return location;
}

string City::getPoi(){
        return poi;
}

/* service methods */
void City::print(){
        cout 
        << 
        "The city is " 
        << name << 
        ". " 
        << 
        population 
        << 
        " people live here. It is situated in " 
        << 
        location 
        << 
        ". The main point of interest is " 
        << 
        poi 
        <<
        "." 
        <<
        endl;
}
