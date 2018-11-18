/*
CH08-320142
problem 1.6.cpp
Aayush Sharma Acharya
a.sharmaacharya@jacobs-university.de
*/

#include <iostream>
#include <ctime>
using namespace std;

int main(int argc, char** argv){
        int usr_input;
        int randomNumber;
        int n_tries=0;
        string usr_name;
        cout << "Enter your name: ";
        cin >> usr_name;
        srand(static_cast<unsigned int>(time(0)));

        //random number generation from 1 to 100
        randomNumber = (rand() % 100) + 1; 

        while (usr_input != randomNumber){
              cout << "Enter your guess: " ;
              cin >> usr_input;
              if (usr_input < randomNumber){
                      cout << "Your answer must be higher" << endl;
              }else if (usr_input > randomNumber){
                      cout << "Your answer must be lower" << endl;
              }           
              n_tries++; 
        }
        if (usr_input == randomNumber){
                cout << "Congratulations " 
                        << usr_name 
                        << ", you guessed it in " 
                        << n_tries << " tries"
                        << endl;
        }

}
