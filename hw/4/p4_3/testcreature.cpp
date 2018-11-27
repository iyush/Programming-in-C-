/*
CH08-320142
testcreature.cpp
Aayush Sharma Acharya
a.sharmaacharya@jacobs-university.de
*/
#include <iostream>
#include "Creature.h"
/**************** Main Function ***********************/

int main()
{ 
    cout << "Creating an Creature.\n";
    Creature c;
    c.run();

    cout << "\nCreating a Wizard.\n";
    Wizard w;
    w.run();
    w.hover();

    cout << "\nCreating a Dragon.\n";
    Dragon d;
    d.run();
    d.Flying();

    cout << "\nCreating a Black Smith.\n";
    BlackSmith bs;
    bs.run();
    bs.tired();

    return 0;
} 
