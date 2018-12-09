/*
	CH08-320142
	testReferee.cpp
	Aayush Sharma Acharya
	a.sharmaacharya@jacobs-university.de
*/

#include <iostream>
#include <cstring>
#include "TournamentMember.h"

using namespace std;
int main(){
	Player khalid(
			"khalid", 
			"hhuss", 
			"1992-03-11", 
			"Player", 
			"Australia", 
			12, 
			"Goalkeeper", 
			true);

	Player jamie(
			"jamie", 
			"glaslock", 
			"1991-01-19", 
			"Player", 
			"Germany", 
			11, 
			"Forward", 
			false);

	khalid.setLocation("BREMEN");
	
	Referee ref;
	cout << endl;
	//Adding the first time
	ref.addToYellowCardList(&khalid);
	cout << "Yellow Card Count: " << ref.getYellowCardCount() <<endl <<endl;

	//Adding the second time
	ref.addToYellowCardList(&khalid);
	cout << "Yellow Card Count: " << ref.getYellowCardCount() <<endl;
	cout << "Red Card Count: " << ref.getRedCardCount() <<endl <<endl;

	//Adding red carded player to the red card list
	ref.addToRedCardList(&khalid);
	cout << "Red Card Count: " << ref.getRedCardCount() <<endl <<endl;

	//Adding new player to the red card list
	ref.addToRedCardList(&jamie);
	cout << "Red Card Count: " << ref.getRedCardCount() <<endl <<endl;

	return 0;
}
