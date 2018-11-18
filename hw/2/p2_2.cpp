/*
CH08-320142
problem 2.2.cpp
Aayush Sharma Acharya
a.sharmaacharya@jacobs-university.de
*/

#include <iostream>
using namespace std;
void swapping(int &a, int &b) {
    int help = a ;
    a = b;
    b = help ;  
} // swap ints

void swapping(double &a, double &b) {
        double help = a;
        a = b;
        b = help;
} // swap doubles

void swapping(const char* &a, const char* &b) {
        const char* help = a;
        a = b;
        b = help;
} // swap char pointers

int main(void) {
    int a = 5, b = 10;
    double x = 5.2, y = 10.7;
    const char *str1 = "One";
    const char *str2 = "Two";
    cout << "a=" << a << ", b=" << b << endl;
    cout << "x=" << x << ", y=" << y << endl;
    cout << "str1=" << str1 << ", str2=" << str2 << endl;
    swapping(a, b);
    swapping(x, y);
    swapping(str1, str2);
    cout << "a=" << a << ", b=" << b << endl;
    cout << "x=" << x << ", y=" << y << endl;
    cout << "str1=" << str1 << ", str2=" << str2 << endl;
    return 0;
}
