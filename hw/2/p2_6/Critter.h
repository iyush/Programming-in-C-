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

	public: // business logic methods are public
		// setter methods
                void setName(std::string& newname){
                        name = newname;
                }
                void setHunger(int newhunger){
                        hunger = newhunger;
                }
                void setBoredom(int newboredom);
                // getter method
                int getHunger();
                // service method
                void print(){
                        std::cout 
                                << 
                                "I am " 
                                <<
                                name 
                                << 
                                ". My hunger level is " 
                                << 
                                hunger 
                                << 
                                "." 
                                <<
                                std::endl; 
                }
};


