/*
CH08-320142
a4 p1.cpp
Aayush Sharma Acharya
a.sharmaacharya@jacobs-university.de
*/
#include<iostream>
using namespace std;

class Box {
    private:
        float height;
        float width;
        float depth;
    public:
        //Constructor
        Box();
        Box(float l, float w, float d);

        //Destructor
        ~Box();

        //set methods
        void setHeight(float);
        void setWidth(float);
        void setDepth(float);

        //get methods
        float getHeight();
        float getWidth();
        float getDepth();

        //service methods
        float volume();
};