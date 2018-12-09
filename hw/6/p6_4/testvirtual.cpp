/*
CH08-320142
testvirtual.cpp
Aayush Sharma Acharya
a.sharmaacharya@jacobs-university.de
*/

#include <iostream>
#include "Area.h"
#include "Circle.h"
#include "Ring.h"
#include "Rectangle.h"
#include "Square.h"
#include <cstring>
 
using namespace std;

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
const int num_obj = 20;

int main() {
	srand(static_cast<unsigned int>(time(0)));

	Area *list[num_obj];	
	// Array of 6 Area objects being declared
	int index = 0;			
	// intialized to be 0 for list traversion
	double sum_area = 0.0;		
	double sum_perimeter= 0.0;		
	const char* colors[4] = {"YELLOW","RED", "GREEN","BLUE"};
	// Assignment of address of pointers of objects into the each array cell.
	Area *obj;

	// Random Object Generation and Assignment
	for (int i = 0 ; i < num_obj ; i++ ){
		switch(rand() % 4){
			case 0:
				obj = new Ring(colors[rand()%4],rand()%50+1,rand()%50+1);
				break;
			case 1:
				obj = new Square(colors[rand()%4],rand()%50+1);
				break;
			case 2:
				obj = new Circle(colors[rand()%4],rand()%50+1);
				break;
			case 3:
				obj = new Rectangle(colors[rand()%4],rand()%50+1,rand()%50+1);
				break;
			default:
				break;
		}
		list[i] = obj;
	}

	while (index < num_obj) {	//Traversing the array until index is 20
		(list[index])->getColor();				
		double area = list[index]->calcArea();
		double perimeter = list[index++]->calcPerimeter();
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
