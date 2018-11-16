/*
CH08-320142
problem 1.3.cpp
Aayush Sharma Acharya
a.sharmaacharya@jacobs-university.de
*/
#include <iostream>
using namespace std;
int sign(int x){
        if (x < 0){
                return -1;
        }else if(x>0){
                return 1;
        }else{
                return 0;
        }
}
int main(int argc, char** argv){
        int x;
        cin >> x;
        cout << sign(x)<<endl;
        return 0;
}
