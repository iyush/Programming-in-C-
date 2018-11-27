/*
CH08-320142
Complex.h
Aayush Sharma Acharya
a.sharmaacharya@jacobs-university.de
*/
#include <iostream>
using namespace std;

class Complex {
    private:
        float real;
        float imag;

    public:
        //Constructor
        Complex();
        Complex(float r, float i = 0);
        Complex(const Complex& c);
        
        // Destructor
        ~Complex();

        // Setter Methods
        void setReal(float);
        void setImag(float);

        //getter Methods
        float getReal();
        float getImag();

        //conjugate, adding, substraction and multiplier
        Complex conjugate();
        Complex add(Complex&);
        Complex substract(Complex&);
        Complex multiplication(Complex&);

        //service Methods
        void print();
};