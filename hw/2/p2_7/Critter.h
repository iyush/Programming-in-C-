/*
CH08-320142
Critter.h
Aayush Sharma Acharya
a.sharmaacharya@jacobs-university.de
*/

#include <string> // defines standard C++ string class

/* First C++ class */
class Critter
{
	private:  // data members are private
		std::string name;
		int hunger;
		int boredom;
		double height;
		std::string color;
		double weight;

	public: // business logic methods are public
		// setter methods
		void setName(std::string& newname);
		void setHunger(int newhunger);
		void setBoredom(int newboredom);
		//new added setters
		void setColor(std::string& newcolor);
		void setWeight(double newweight);

		// getter method
		int getHunger();
		//new added getters
		std::string getColor();
		double getWeight();

		// service method
		void print();
};
