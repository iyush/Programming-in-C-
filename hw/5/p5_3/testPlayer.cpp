/*
CH08-320142
testPlayer.cpp
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
			true
			);

	Player jamie(
			"jamie", 
			"glaslock", 
			"1991-01-19", 
			"Player", 
			"Germany", 
			11, 
			"Forward", 
			false);
	Player nico(
			"nico", 
			"bellic", 
			"1981-02-12", 
			"Player", 
			"Italy", 
			19, 
			"Defender", 
			true);
	
	khalid.setLocation("BREMEN");

	khalid.printPlayer();
	jamie.printPlayer();
	nico.printPlayer();


}
