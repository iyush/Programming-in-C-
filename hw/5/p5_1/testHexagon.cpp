/*
CH08-320142
testHexagon.cpp
Aayush Sharma Acharya
a.sharmaacharya@jacobs-university.de
*/
#include <iostream>
#include "Shapes.h"

using namespace std;

int main(){
	//red hexagon
	Hexagon rh("Red Hexagon", 0.0, 0.0, 6, 2, "Red");
	rh.printName();
	cout << "side: " << rh.getSide() << endl;
	cout << "color: " << rh.getColor() << endl;
	cout << "area: " << rh.area() << endl;
	cout << "perimeter: " << rh.perimeter() << endl<<endl;
	
	//yellow hexagon
	Hexagon yh("Yellow Hexagon", 0.0, 0.0, 6,10, "Red");
	yh.printName();
	cout << "side: " << yh.getSide() << endl;
	cout << "color: " << yh.getColor() << endl;
	cout << "area: " << yh.area() << endl;
	cout << "perimeter: " << yh.perimeter() << endl<<endl;
	
	//copied from yellow
	Hexagon copied(yh);
	copied.printName();
	cout << "side: " << copied.getSide() << endl;
	cout << "color: " << copied.getColor() << endl;
	cout << "area: " << copied.area() << endl;
	cout << "perimeter: " << copied.perimeter() << endl<<endl;
	return 0;
}
