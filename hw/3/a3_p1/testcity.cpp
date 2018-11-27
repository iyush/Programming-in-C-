/*
CH08-320142
a3 p1.cpp
Aayush Sharma Acharya
a.sharmaacharya@jacobs-university.de
*/
#include <iostream>
#include "City.h"

using namespace std;

int main(int argc, char** argv ){
        //Declaring Instances
        City a,b,c;

        //Setting the instances
        a.setName("Hamburg");
        a.setPopulation(20000000);
        a.setLocation("Germany");
        a.setPoi("Reeperbahn");

        b.setName("Bremen");
        b.setPopulation(5000000);
        b.setLocation("Germany");
        b.setPoi("Bremen City Hall");

        c.setName("Berlin");
        c.setPopulation(25000);
        c.setLocation("Germany");
        c.setPoi("Berlin Wall");

        //Printing
        a.print();
        b.print();
        c.print();

        return 0;


}
