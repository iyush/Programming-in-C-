/*
CH08-320142
Complex.cpp
Aayush Sharma Acharya
a.sharmaacharya@jacobs-university.de
*/
#include<iostream>
#include "Complex.h"

//Constructor
Complex::Complex(){
    real = 0;
    imag = 0;
}

Complex::Complex(float r, float i): real(r), imag(i){}

Complex::Complex(const Complex& c): real(c.real), imag(c.imag){}

 // Destructor
Complex::~Complex(){}
 
 //setter Methods
 void Complex::setReal(float r){
     real =r;
 }
 
 void Complex::setImag(float i){
     imag = i;
 }
//getter Methods
float Complex::getReal(){
    return real;
}
float Complex::getImag(){
    return imag;
}

//conjugate, adding, substraction and multiplier
Complex Complex::conjugate(){
    return Complex(real, imag * -1);
}

Complex Complex::add(Complex& c){
    return Complex(real + c.real, imag+c.imag);
}

Complex Complex::substract(Complex& c){
    return Complex(real - c.real, imag - c.imag);
}

Complex Complex::multiplication(Complex& c){
    float _real = real * c.real - imag * c.imag;
    float _imag = real * c.imag + imag * c.real;
    return Complex(_real, _imag);
}
 //service methods
void Complex::print(){
    if (imag) {
        cout << noshowpos << real << showpos << imag << "i" << endl;
    } else {
        cout << noshowpos << real << showpos << endl;
    }
}
