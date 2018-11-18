/*
CH08-320142
problem 1.5.cpp
Aayush Sharma Acharya
a.sharmaacharya@jacobs-university.de
*/

#include <iostream>
#include <string>
using namespace std;
int main (int argc, char** argv){
        string str;
        char elem;
        bool doesnotbelongs = true;
        while (doesnotbelongs){
                cout << "Enter a character: ";
                cin >> elem; //does not accept newline, tabs and spaces
                if (elem == 'q'){
                        doesnotbelongs = false;
                }else{
                        str += elem;
                }
        }
        cout << str << endl;
}
