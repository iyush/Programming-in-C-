/*
CH08-320142
testshapes.cpp
Aayush Sharma Acharya
a.sharmaacharya@jacobs-university.de
*/
#include "Shapes.h"
#include <iostream>

using namespace std;
int main(int argc, char** argv) {

  RegularPolygon r("TRIANGLE", 1, 1, 3);
  r.printName();

  //Creating instance of Rectangle
  cout << endl;
  Rectangle rec("This is a rectangle", 0,0,20,15);
  rec.printName();
  cout << rec.perimeter() << endl;
  cout << rec.area() << endl<<endl;

  //Creating instance of Square
  Square sq("New square", 0.0,0.0,12);
  sq.printName();
  cout << sq.perimeter() << endl;
  cout << sq.area() << endl<<endl;

  //Creating instance of Circle
  Circle c("first circle", 3, 4, 7);
  c.printName();
  cout << c.perimeter() << endl;
  cout << c.area() << endl;
  
  return 0;
}
