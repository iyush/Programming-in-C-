/*
CH08-320142
testcreature.cpp
Aayush Sharma Acharya
a.sharmaacharya@jacobs-university.de
*/

#include <iostream>
#include "Creature.h"

using namespace std;
/**************** Main Function ***********************/

int main()
{ 
    char option;
    while (true){
        cout << 
            "Choose your options:" 
            <<  "w for wizard, " 
            <<  "1 for Dragon and"
            << "2 for Black Smith,"
            <<" enter q to quit" << endl;
        cin >> option;
        
        //end loop if q is entered
        if (option == 'q'){
            break;
        }

        //options and their handles
        if (option == 'w'){
            cout << "\nCreating a Wizard.\n";
            Wizard *w;
            w = new Wizard;
            w->run();
            w->hover();
            delete w;
        }else if(option == '1'){
            cout << "\nCreating a Dragon.\n";
            Dragon *d;
            d = new Dragon;
            d->run();
            d->Flying();
            delete d;
        }else if (option == '2'){
            cout << "\nCreating a Black Smith.\n";
            BlackSmith *bs;
            bs = new BlackSmith;
            bs->run();
            bs->tired();
            delete bs;
        }else{
            cout << "\nInvalid Input try again!" << endl;
        }
}} 
