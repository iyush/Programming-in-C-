/*
CH08-320142
problem 2.5.cpp
Aayush Sharma Acharya
a.sharmaacharya@jacobs-university.de
*/

#include <string>
#include <iostream>
#include <algorithm>
using namespace std;

bool isPalindrome (string str){
        string reversed = str;
        //reversing the string
        reverse(reversed.begin(), reversed.end());
        if (str == reversed){
                //checking if reverse is equal to original
                return true;
        }
        return false;
}

int main(int argc, char** argv){
       string usr_input;
       while(true){
               cout << "Enter a word to check if its palindrome or not: ";
               cin >> usr_input;
               if (usr_input == "stop"){
                       break; //breaks loop if stop is entered
               }
               //checks if word is palindrome or not
               if (isPalindrome(usr_input)){
                       cout << "It is a palindrome" << endl;
               } else {
                       cout << "It is not a palindrome"<<endl;
               }
       } 
       return 0;
}
