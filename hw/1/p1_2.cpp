/*
CH08-320142
problem 1.2.cpp
Aayush Sharma Acharya
a.sharmaacharya@jacobs-university.de
*/

#include <iostream>
using namespace std;

int main(int argc, char** argv){
        int nr;
        float val;
        string s;
        cin >> nr;
        cin >> val;
        cin >> s;
        for (int i = 0;i<nr;i++){
                cout<< val << " " << s << endl;
        }
        return 0;
}
