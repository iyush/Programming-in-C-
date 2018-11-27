/*
CH08-320142
Shapes.h
Aayush Sharma Acharya
a.sharmaacharya@jacobs-university.de
*/
/* 
	Classic shape examples: an inheritance tree in a geometric context
*/
#ifndef __SHAPES_H
#define __SHAPES_H
#include <string>
using namespace std;

class Shape {			
	private:   			
		std::string name;   		
	public:
		Shape(const std::string&);  
		Shape();					// empty shape
		Shape(const Shape&);		// copy constructor
		
		void setName(const string&);//setters
		string getName() const;		//getters
		void printName() const ;  	// prints the name  
};

class CenteredShape : public Shape {  // inherits from Shape
	private: 
		double x,y;  // the center of the shape
	public:
		//Constructors
		CenteredShape(const std::string&, double, double);
		CenteredShape();
		CenteredShape(const CenteredShape&);
		
		//setter
		void setX(double);					
		void setY(double);					
		//getter
		double getX() const;				
		double getY() const;				
		void move(double, double);			
};

// a regular polygon is a centered_shape with a number of edges
class RegularPolygon : public CenteredShape { 
	private: 
		int EdgesNumber;
	public:
		RegularPolygon(const std::string&, double, double, int);
		RegularPolygon();
		RegularPolygon(const RegularPolygon&);

		//setter
		void setEdgeNumber(int); 	
		//getter	
		int getEdgeNumber() const;		
};

// a Circle is a shape with a center and a radius
class Circle : public CenteredShape {  
	private:
		double Radius;
	public:
		Circle(const std::string&, double, double, double);
		Circle();
		Circle(const Circle&);
		//setter
		void setRadius(double);	

		//getter 
		double getRadius() const;			

		//perimeter and area
		double perimeter();			
		double area();			
};

//Rectangle with center and length, width
class Rectangle : public RegularPolygon {	
	private:
		double width, height;
	
	public:
		Rectangle(const std::string&, double, double, double, double);
		Rectangle();
		Rectangle(const Rectangle&);
		//setters
		void setWidth(double);				
		void setHeigth(double);				
		//getters
		double getWidth() const;			
		double getHeigth() const;			
		//perimeter
		double perimeter();					
		//area
		double area();						
};

class Square : public Rectangle {	//Square with center and side
	private:
		double side;
	
	public:
		Square(const std::string&, double, double, double);
		Square();
		Square(const Square&);
		//setters
		void setSide(double);		
		//getters
		double getSide() const;		
		//perimeter
		double perimeter();		
		//area
		double area();			
};
    
#endif
