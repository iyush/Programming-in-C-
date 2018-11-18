/*
CH08-320142
problem 2.1.cpp
Aayush Sharma Acharya
a.sharmaacharya@jacobs-university.de
*/

#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int myfirst( int *x, int n){
        int i=0;
        while (i < n){
                if (x[i] > 0 && x[i] % 2 != 0){
                        return x[i];
                }
                i++;
        }
        return -1;
}

double myfirst( double *x, int n){
        int i=0;
        double p;
        while (i < n){
                if (x[i] > 0 && modf(x[i], &p) == 0 ){
                        return x[i];
                }
                i++;
        }
        return -1.1;
}

char myfirst( char *x, int n){
        int i=0;
        while (i < n){
                char y = tolower(x[i]);
                if (y == 'a' || y == 'e' || y == 'i' || y == 'o' || y == 'u'){ 
                        return x[i];
                }
                i++;
        }
        return '0';
}

int main(int argc, char** argv){
        int list[5] = {-3,2,6,-4,9};
        cout << myfirst(list, 5) <<endl; 
        //calling the function for list of integers
        
        double listOfArray[5] = {1.1,1.2,1.3,1.4,14.0};
        cout << myfirst(listOfArray, 5) <<endl;                        
        //calling the function for list of doubles

        char listOfChars[5] = {'b','b','c','d','E'};
        cout << myfirst(listOfChars, 5) <<endl;                        
        //calling the function for list of chars
        return 0;

}


