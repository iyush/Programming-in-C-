/*
CH08-320142
testcomplex.cpp
Aayush Sharma Acharya
a.sharmaacharya@jacobs-university.de
*/
#include <iostream>
#include "Complex.h"

using namespace std;

int main(){
    Complex a(1,13),b(2,3),c;
    a.print();
    b.print();
    
    cout << "Conjugate of first: ";
    c = a.conjugate();
    c.print();
    cout << "Addition: ";
    c = a.add(b);
    c.print();
    cout << "Substraction: " ;
    c = a.substract(b);
    c.print();
    cout << "Multiplication: " ;
    c = a.multiplication(b);
    c.print();

}