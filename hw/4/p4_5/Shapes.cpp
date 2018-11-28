/*
CH08-320142
Shapes.cpp
Aayush Sharma Acharya
a.sharmaacharya@jacobs-university.de
*/
// please refer to shapes.h for methods documentation
// TODO ==========3 EMPTY CONSTRUCTORS
#include <iostream>
#include "Shapes.h"
#define M_PI 3.14159265358979323846 /* pi */

using namespace std;

/*********** Shape *************/
Shape::Shape(const string &n) : name(n) {}

// empty constructor
Shape::Shape() : name("unknown") {}

// copy constructor
Shape::Shape(const Shape &s) { name = s.name; }

void Shape::printName() const { cout << name << endl; }

// setters
void Shape::setName(const string &nname) { name = nname; }

// getters
string Shape::getName() const { return name; }

/*********** Centered Shape *************/
CenteredShape::CenteredShape(const string &n, double nx, double ny) : Shape(n) {
  x = nx;
  y = ny;
}

// empty constructor
CenteredShape::CenteredShape() : Shape("CenteredShape") {
  x = 0.0;
  y = 0.0;
}

// copy constructor
CenteredShape::CenteredShape(const CenteredShape &other)
    : Shape(other.getName()) {
  x = other.x;
  y = other.y;
}

// setters
void CenteredShape::setX(double nx) { x = nx; }

void CenteredShape::setY(double ny) { y = ny; }

// getters
double CenteredShape::getX() const { return x; }

double CenteredShape::getY() const { return y; }

/*********** Regular Polygon *************/
RegularPolygon::RegularPolygon(const string &n, double nx, double ny, int nl)
    : CenteredShape(n, nx, ny) {
  EdgesNumber = nl;
}

// empty Constructor
RegularPolygon::RegularPolygon() : CenteredShape("RegularPolugon", 0.0, 0.0) {
  EdgesNumber = 0;
}

// copy constructor
RegularPolygon::RegularPolygon(const RegularPolygon &r)
    : CenteredShape(r.getName(), r.getX(), r.getY()) {
  EdgesNumber = r.EdgesNumber;
}

// setters
void RegularPolygon::setEdgeNumber(int n) { EdgesNumber = n; }

// getters
int RegularPolygon::getEdgeNumber() const { return EdgesNumber; }

/*********** Circle *************/
Circle::Circle(const string &n, double nx, double ny, double r)
    : CenteredShape(n, nx, ny) {
  Radius = r;
}

// empty constructor
Circle::Circle() : CenteredShape("Circle", 0.0, 0.0) { Radius = 0.0; }

// copy constructor
Circle::Circle(const Circle &ci)
    : CenteredShape(ci.getName(), ci.getX(), ci.getY()) {
  Radius = ci.Radius;
}

// setters
void Circle::setRadius(double r) { Radius = r; }

// getter
double Circle::getRadius() const { return Radius; }

// perimeter
double Circle::perimeter() { return 2 * M_PI * Radius; }

// area
double Circle::area() { return M_PI * Radius * Radius; }

/*********** Rectangle *************/

// constructor
Rectangle::Rectangle(const string &n, double nx, double ny, double nwidth,
                     double nheight)
    : RegularPolygon(n, nx, ny, 4) {
  width = nwidth;
  height = nheight;
}

// empty constructor
Rectangle::Rectangle() : RegularPolygon("Rectangle", 0.0, 0.0, 0) {
  width = 0.0;
  height = 0.0;
}

// copy constructor
Rectangle::Rectangle(const Rectangle &r)
    : RegularPolygon(r.getName(), r.getX(), r.getY(), r.getEdgeNumber()) {
  width = r.width;
  height = r.height;
}

// setter
void Rectangle::setWidth(double w) { width = w; }

void Rectangle::setHeigth(double h) { height = h; }

// getter
double Rectangle::getWidth() const { return width; }

double Rectangle::getHeigth() const { return height; }

// perimeter
double Rectangle::perimeter() { return 2 * (width + height); }

// area
double Rectangle::area() { return width * height; }

/*********** Square *************/

// constructor
Square::Square(const string &nname, double nx, double ny, double nside)
    : Rectangle(nname, nx, ny, nside, nside) {
  side = nside;
}

// empty Constructor
Square::Square() : Rectangle("Square", 0.0, 0.0, 0.0, 0.0) { side = 0.0; }

// copy constructor
Square::Square(const Square &s)
    : Rectangle(s.getName(), s.getX(), s.getY(), s.getWidth(), s.getHeigth()) {
  side = s.side;
}

// setter
void Square::setSide(double s) { side = s; }

// getter
double Square::getSide() const { return side; }

// perimeter
double Square::perimeter() { return 2 * side; }

// area
double Square::area() { return side * side; }
