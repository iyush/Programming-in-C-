/*
CH08-320142
Square.cpp
Aayush Sharma Acharya
a.sharmaacharya@jacobs-university.de
*/

#include <iostream>
#include <cmath>
#include "Square.h"

//Constructors
Square::Square(const char *n, double s) 
					: Rectangle(n,s,s) {
	side = s;
}

Square::~Square() {
}

//Area
double Square::calcArea() const {
	std::cout << "calcArea of Square...";
	return Rectangle::calcArea();
}

//Perimeter
double Square::calcPerimeter() const {
	std::cout << "calcPerimeter of Square...";
	return Rectangle::calcPerimeter();
}

