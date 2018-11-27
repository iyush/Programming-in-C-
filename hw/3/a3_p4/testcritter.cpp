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
    Critter emptyInstance;
    emptyInstance.setHunger(5);
    emptyInstance.print();

    Critter onlyName("Laura");
    onlyName.setHunger(5);
    onlyName.print();

    Critter four("Kate", 5 , 2, 23);
    four.print();

    Critter noHeight("Midget", 5, 1);
    noHeight.print();

    Critter allFive("Thirst-ie", 10,1,15,5);
    allFive.print();
}
