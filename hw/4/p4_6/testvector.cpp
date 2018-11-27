/*
CH08-320142
testvector.cpp
Aayush Sharma Acharya
a.sharmaacharya@jacobs-university.de
*/
#include "Vector.h"
#include <iostream>
#include <cstring>
#include<cmath>
using namespace std;


int main(){
    Vector v1(2);
    v1.setAtPos(0,23.0);
    v1.setAtPos(1,23);
    cout << "First Vector" <<endl;
    v1.print();

    Vector v2(2);
    v2.setAtPos(0,46.0);
    v2.setAtPos(1,97.2);
    cout << "Second Vector" <<endl;
    v2.print();

    cout << "Norm: " << v1.norm() <<endl;
    cout << "sum: " << endl;
    v1.sum(v2).print();
    cout << "difference: " << endl;
    v1.difference(v2).print();
    cout << "scalar product: " <<endl;
    cout << v1.scalar(v2) <<endl;
}