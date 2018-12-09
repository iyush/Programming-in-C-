/*
CH08-320142
Square.h
Aayush Sharma Acharya
a.sharmaacharya@jacobs-university.de
*/
#ifndef _SQUARE_H
#define _SQUARE_H
#include "Rectangle.h"

class Square : public Rectangle{
    public:
        Square(const char *n, double a);
        ~Square();
        double calcArea() const;
        double calcPerimeter() const;
    private:
        double side;
};

#endif


