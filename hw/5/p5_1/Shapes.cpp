// please refer to shapes.h for methods documentation

/*
        CH08-320142
        Shapes.cpp
        Aayush Sharma Acharya
        a.sharmaacharya@jacobs-university.de
*/
#include <iostream>
#include "Shapes.h"
#include <cmath>

using namespace std; 

Shape::Shape(const string& n) : name(n) {
}

void Shape::printName() const {
	cout << name << endl;
}

CenteredShape::CenteredShape(const string& n, double nx, double ny): Shape(n) {
	x = nx;
	y = ny;
}

RegularPolygon::RegularPolygon(const string& n, double nx, double ny, int nl) :
	CenteredShape(n,nx,ny) 
{
	EdgesNumber = nl;
}

Circle::Circle(const string& n, double nx, double ny, double r) : 
  CenteredShape(n,nx,ny) 
{
	Radius = r;
}

//parametric constructor
Hexagon::Hexagon(const string& n, double nx, double ny, int nl, double s, const string& c): RegularPolygon(n,nx,ny,nl){
	side = s;
	color = c;
}

//default constructor
Hexagon::Hexagon(): RegularPolygon("Hexagon",0.0,0.0,6){
	side = 0.0;
	color = "White";
}

//copy constructor
Hexagon::Hexagon(const Hexagon& h): RegularPolygon(h.name, h.x, h.y, h.EdgesNumber){
	side = h.side;
	color = h.color;
}

//destructor
Hexagon::~Hexagon(){}

//setter
void Hexagon::setSide(double s){
	side = s;
}

void Hexagon::setColor(const string& c){
	color = c;
}

//getter
double Hexagon::getSide(){
	return side;
}
string Hexagon::getColor(){
	return color;
}

//area
double Hexagon::area(){
	return 3*sqrt(3)* side * side / 2;
}

//perimeter
double Hexagon::perimeter(){
	return 6*side;
}

