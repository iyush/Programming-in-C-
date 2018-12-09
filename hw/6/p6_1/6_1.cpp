
/*
CH08-320142
a6 p1.cpp
Aayush Sharma Acharya
a.sharmaacharya@jacobs-university.de
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

string generateColor(){
	string colors[4] = {"YELLOW","RED", "GREEN","BLUE"};
	//generating a random Number
	int randomNumber = rand();
	int die = (randomNumber % 4);
	return colors[die];
}

int main(){
	int count = 0;
	// init random number generator
	srand(static_cast<unsigned int>(time(0)));

	while (count < 10) {
		cout << count+1 << ": " << generateColor() << endl;
		count++;
	}
	return 0;
}
