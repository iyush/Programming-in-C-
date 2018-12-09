/*
CH08-320142
testTournamentMember.cpp
Aayush Sharma Acharya
a.sharmaacharya@jacobs-university.de
*/

#include <iostream>
#include <cstring>
#include "TournamentMember.h"

using namespace std;
int main(){
	TournamentMember khalid;
	khalid.setFname("Khalid");
	khalid.setLname("Jackson");
	khalid.setDob("1992-02-10 abcdef");
	khalid.setRole("Player");
	khalid.setCountry("Wakanda");

	TournamentMember jamie("jamie","glaslock","1991-01-19","Coach","Wakanda");
	TournamentMember kika(jamie);

	kika.setLocation("Sydney");

	khalid.print();
	jamie.print();
	kika.print();
}
