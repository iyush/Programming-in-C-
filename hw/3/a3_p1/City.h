/*
CH08-320142
a3 p1.cpp
Aayush Sharma Acharya
a.sharmaacharya@jacobs-university.de
*/
#include <iostream>

using namespace std;

class City{
        private:
                string name;
                int population;
                std::string location;
                std::string poi;

        public:
                //setter Methods
                void setName(string newname);
                void setPopulation(int newpopulation);
                void setLocation(string newlocation);
                void setPoi(string poi);
                
                //getter methods
                string getName();
                int getPopulation();
                string getLocation();
                string getPoi();

                //service
                void print();
};
