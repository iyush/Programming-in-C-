/*
CH08-320142
Creature.cpp
Aayush Sharma Acharya
a.sharmaacharya@jacobs-university.de
*/

#include <iostream>
#include "Creature.h"

using namespace std;

Creature::Creature(): distance(10){}    

void Creature::run() const
{ 
    cout << "running " << distance << " meters!\n";
}  


/***************** Wizard ********************/

// Constructor
Wizard::Wizard() : distFactor(3)
{
    cout << "Wizard created" <<endl;
}  

//Method
void Wizard::hover() const
{
    cout << "hovering " << (distFactor * distance) << " meters!\n";
}

//Destructor
Wizard::~Wizard(){
    cout << "Wizard dead" <<endl;
}

/***************** Dragon ********************/

//Constructor
Dragon::Dragon() : flyFactor(15){
    cout << "Dragon created" <<endl;
}

//Method
void Dragon::Flying() const{
    cout << "Dragon is flying for " 
         << (flyFactor * distance) 
         << " meters!" << endl;
}
//Destructor
Dragon::~Dragon(){
    cout << "Dragon dead" <<endl;
}

/***************** BlackSmith ********************/
//Constructor
BlackSmith::BlackSmith(): hammered(5) {
    cout << "Blacksmith created" <<endl;
}

//Method
void BlackSmith::tired()const{
    cout 
        << "The blacksmit hammered for " 
        << hammered 
        << " hours straight" 
        <<". Now all he need is run for " 
        << (hammered * distance) << " meters\n" << endl;
}
//Destructor
BlackSmith::~BlackSmith(){
    cout << "BlackSmith dead" <<endl;
}

