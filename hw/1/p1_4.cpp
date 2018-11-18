/*
CH08-320142
problem 1.4.cpp
Aayush Sharma Acharya
a.sharmaacharya@jacobs-university.de
*/

#include <iostream>
#include <string>
#include <cstdio>
using namespace std;

int mycount (int a, int b){
        return a+b;
}

int mycount (string a, char b ){
        unsigned int occ=0, i = 0;
        while (i < a.length()){
                if (a[i] == b){
                        occ++;
                        break;
                }
                occ++;
                i++;
        }
        if (occ == 0){
                return -1;
        }
        return occ;

}

int main(int argc, char** argv){
        int n1, n2;
        string s;
        char c;
        cout << "Enter a string: " ;
        getline(cin, s);
        cout << "Enter character: " ;
        cin >> c;
        cout << mycount(s,c) << endl; //call the function for string

        cout << "Enter a number: ";
        cin >> n1;
        cout << "Enter another number: ";
        cin >> n2;
        cout << mycount(n1,n2) << endl; //call the function for integer

        return 0;
}
