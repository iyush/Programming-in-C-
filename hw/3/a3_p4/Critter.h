/*
CH08-320142
Critter.h
Aayush Sharma Acharya
a.sharmaacharya@jacobs-university.de
*/

#include <string>
using namespace std;

class Critter
{
	private:
		string name;
		double hunger;
		int boredom;
		double height;
                double thirst;

	public:

        //Constructors
        Critter();
        Critter(string newname);
        Critter(string newname, 
                int newhunger, 
                int newboredom, 
                double newheight = 15);

        Critter(string newname, 
                int newhunger, 
                int newboredom,  
                double newheight,
                double newthirst);

        
        // setter methods
        void setName(string& newname);
        void setHunger(int newhunger);
        void setThirst(int newthirst);
        void setBoredom(int newboredom);
        void setHeight(double newboredom);
        //no set method for thirst as it is not needed

        // getter method
        string getName();
        double getHunger();
        int getBoredom();
        double getHeight();
        //no  get method for thirst as it is not needed

        // service method
        void print();

        //methods for conversion
        double intToDouble(int);
        double doubleToInt(double);

};


