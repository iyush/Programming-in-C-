/*
CH08-320142
a3 p2.cpp
Aayush Sharma Acharya
a.sharmaacharya@jacobs-university.de
*/
#include <iostream>
using namespace std;

class Critter
{
    private:
        string name;
        int hunger;
        int boredom;
        double height;

    public: 
        //Constructors
        Critter();
        Critter(string newname);
        Critter(string newname, 
                int newhunger, 
                int newboredom, 
                double newheight = 15);

        // setter methods
        void setName(std::string& newname);
        void setHunger(int newhunger);
        void setBoredom(int newboredom);
        void setHeight(double newboredom);

        // getter method
        string getName();
        int getHunger();
        int getBoredom();
        double getHeight();

        // service method
        void print();
};


