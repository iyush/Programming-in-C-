/*
CH08-320142
a4 p1.cpp
Aayush Sharma Acharya
a.sharmaacharya@jacobs-university.de
*/
#include "Box.h"
#include <iostream>
using namespace std;

//Constructors
Box::Box(){
    height = 0;
    width = 0;
    depth = 0; 
}

Box::Box(float h, float w, float d){
    height = h;
    width = w;
    depth = d;
}

//Destructor
Box::~Box(){
    cout << "Calling destructor!" << endl;
}

//Set Methods
void Box::setHeight(float h){
    height = h;
}


void Box::setWidth(float w){
    width = w;
}


void Box::setDepth(float d){
    depth = d;
}

//Get Methods
float Box::getHeight(){
    return height;
}

float Box::getWidth(){
    return width;
}

float Box::getDepth(){
    return depth;
}

//service methods
float Box::volume(){
    return height * width * depth;
}