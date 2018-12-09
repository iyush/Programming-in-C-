/*
CH08-320142
testvirtual.cpp
Aayush Sharma Acharya
a.sharmaacharya@jacobs-university.de
*/


#include <iostream>
using namespace std;
#include "Area.h"
#include "Circle.h"
#include "Ring.h"
#include "Rectangle.h"
#include "Square.h"
 
/*
							Area
						============== 
						/			\
					   /	         \
				Rectangle			 Circle
				=========			 ==========
				    /					\
				   /					 \
				  /						  \
				Square					  Ring
			============				=========
*/

const int num_obj = 7;
int main() {
	Area *list[num_obj];	
	// Array of 6 Area objects being decleared

	int index = 0;			
	// declaring the index to be 0 so that it can traverse the list later

	double sum_area = 0.0;		
	double sum_perimeter= 0.0;		
	//Initializing the sum of the area and perimeter to be 0 

	// Declearing objects 
	cout << "Creating Ring: ";
	Ring blue_ring("BLUE", 5, 2);		
	cout << "Creating Circle: ";
	Circle yellow_circle("YELLOW", 7);
	cout << "Creating Rectangle: ";
	Rectangle green_rectangle("GREEN",5,6);
	cout << "Creating Circle: ";
	Circle red_circle("RED", 8);
	cout << "Creating Rectangle: ";
	Rectangle black_rectangle("BLACK", 10, 20);
	cout << "Creating Ring: ";
	Ring violet_ring("VIOLET", 100, 5);

	//new square object
	cout << "Creating Square: ";
	Square golden_square("GOLDEN", 10);

	// Filing each row of list with pointer objects 
	list[0] = &blue_ring;						
	list[1] = &yellow_circle;
	list[2] = &green_rectangle;
	list[3] = &red_circle;
	list[4] = &black_rectangle;
	list[5] = &violet_ring;
	list[6] = &golden_square;

	while (index < num_obj) {	//Traversing the array until index is 6
		(list[index])->getColor();				
		double area = list[index]->calcArea();
		double perimeter = list[index++]->calcPerimeter();
		// assign variables so that they could be summed later
		// At the same time, increasing the index by 1.
		sum_area += area;
		sum_perimeter += perimeter;
	}

cout << "\nThe total area is "
			<< sum_area << " units " << endl;	
			// Printing the sum of all areas

	cout << "\nThe total perimeter is "
			<< sum_perimeter << " units " << endl;	
			// Printing the sum of all perimeters
	return 0;
}
