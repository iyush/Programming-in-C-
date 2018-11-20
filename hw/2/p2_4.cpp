/*
CH08-320142
problem 2.4.cpp
Aayush Sharma Acharya
a.sharmaacharya@jacobs-university.de
*/

#include <iostream>
#include <ctime>
#include <string>
using namespace std;

int main (int argc, char** argv){
        string list[15] = {
                "computer", 
                "television", 
                "keyboard", 
                "magazine", 
                "book"
        };
        int randomNumber;
        string g_word;
        string randomWord;
        string tempRandomWord;
        for (int i = 0; i < 10; i++){
                string word;
                cout << "Enter a word: ";
                cin >> word;
                list[5+i] = word;
        }
        srand(static_cast<unsigned int>(time(0)));

        //random number generation from 1 to 15
        randomNumber = rand() % 15; 
        randomWord = list[randomNumber];
        tempRandomWord = randomWord;

        for (unsigned int i= 0; i < randomWord.length(); i++ ){
                char y=tolower(randomWord[i]);
                if (y == 'a' || y == 'e' || y == 'i' || y == 'o' || y == 'u'){
                        tempRandomWord[i] = '_';
                }
        }

        cout << "Guess the word below: "<<endl;
        cout << tempRandomWord <<endl;
        bool found = false;
        int tries = 1;
        while (found == false){
                cin >> g_word;
                if (g_word == "quit"){
                        cout << "Game stopped!" <<endl;
                        break;
                }
                if (g_word == randomWord){
                        cout << 
                                "You have guessed it!" 
                                << 
                                " in " 
                                << 
                                tries
                                << 
                                " tries " 
                                <<endl;
                        found = true;
                }else{
                        cout << "Incorrect, Try again: ";
                        tries++;
                }
        } 

}
