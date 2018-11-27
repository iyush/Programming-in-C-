/*
CH08-320142
a3 p2.cpp
Aayush Sharma Acharya
a.sharmaacharya@jacobs-university.de
*/

#include <iostream>
#include "Critter.h"

using namespace std;

int main(int argc, char** argv)
{
    // empty instance
    Critter emptyInstance;
    emptyInstance.setHunger(5);
    emptyInstance.print();

    // instance with only name supplied
    Critter onlyName("Laura");
    onlyName.setHunger(5);
    onlyName.print();

    // instance with every parameter specified
    Critter everything("Kate", 5 , 2, 23);
    everything.print();

    // instance with no height but everything else present
    Critter noHeight("Midget", 5, 1);
    noHeight.print();

}
