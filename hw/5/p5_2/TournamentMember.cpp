/*
CH08-320142
TournmentMember.cpp
Aayush Sharma Acharya
a.sharmaacharya@jacobs-university.de
*/

#include <iostream>
#include <cstring>
#include "TournamentMember.h"

std::string TournamentMember::location = "unknown";

//constructors

TournamentMember::TournamentMember(){
	std::cout << "tournament member default constructor being called" << std::endl;
	fname[0] = 0;
	lname[0] = 0;
	dob[0] = 0;
	role = "__UNKNOWN__";
	country = "__UNKNOWN__";
}

TournamentMember::TournamentMember(
		char const fname[], 
		char const lname[], 
		char const dob[],
		const std::string& role,
		const std::string& country){
	std::cout << "tournament member parametric constructor being called"
		<<std::endl;
	strcpy(this->fname, fname);
	strcpy(this->lname, lname);
	strcpy(this->dob,dob);
	this->role = role;
	this->country = country;

}

TournamentMember::TournamentMember(const TournamentMember& other){
	std::cout << "tournament member copy constructor being called"<<std::endl;
	strcpy(this->fname, other.fname);
	strcpy(this->lname, other.lname);
	strcpy(this->dob, other.dob);
	this->role = other.role;
	this->country = other.country;
}

TournamentMember::~TournamentMember(){
	std::cout << "tournament member Destructor being called" << std::endl;
}

//print methods
void TournamentMember::print(){
	std::cout << "First Name: " << fname << std::endl
		<< "Last Name: " << lname << std::endl
		<< "Date of Birth: " << dob << std::endl
		<< "Location: " << location << std::endl
		<< "Role: " << role << std::endl
		<< "Country: " << country << std::endl;
}
