/*
CH08-320142
problem 2.3.cpp
Aayush Sharma Acharya
a.sharmaacharya@jacobs-university.de
*/

#include <iostream>
#include <climits>
using namespace std;


void add_min(int* arr,int n){
       int min = INT_MAX;
       for (int i = 0; i < n; i++){
               if (arr[i]< min){
                       min = arr[i];
               }
       }
       for (int i = 0; i < n; i++){
               arr[i] += min;
       }
}

void deallocate (int * arr, int n){
        delete[] arr;
}

int main(int argc, char** argv){
        int n;
        cout << "How many? "; 
        cin >> n;
        int* x = new int[n];
        for (int i = 0; i < n; i++){
                cout << "Enter a integer: ";
                cin >> x[i];
        }
        cout << "Before the array is: " <<endl;
        for (int i = 0; i < n; i++){
                cout << x[i] <<endl;
        }
        add_min(x,n);
        cout << "After adding the minimum value, the array is: " <<endl;
        for (int i = 0; i < n; i++){
                cout << x[i] <<endl;
        }
        deallocate(x,n);
}
