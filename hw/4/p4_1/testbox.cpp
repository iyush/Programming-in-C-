/*
CH08-320142
a4 p1.cpp
Aayush Sharma Acharya
a.sharmaacharya@jacobs-university.de
*/

#include "Box.h"
#include <iostream>

using namespace std;

int main(){
    int n;
    Box *boxes;
    cout << "How many boxes? ";
    cin >> n;
    boxes = new Box[n];

    float dimension;
    
    //get input and assign them
    for(int i = 0; i<n; i++){
        cout << "Enter the height for " << i+1 << ": ";
        cin >> dimension;
        boxes[i].setHeight(dimension);

        cout << "Enter the width for " << i+1 << ": ";
        cin >> dimension;
        boxes[i].setWidth(dimension);

        cout << "Enter the depth for " << i+1 << ": ";
        cin >> dimension;
        boxes[i].setDepth(dimension);
    }

    float sum = 0;
    for (int i = 0; i<n; i++){
        cout << "The volume for " << i+1 << " is "<<boxes[i].volume()<<endl;
        sum += boxes[i].volume();               //Calculating Volume
    }
    cout << "The total sum of volumes: " << sum << endl;

    //deleting the dynamic array
    delete [] boxes;
    return 0;

}