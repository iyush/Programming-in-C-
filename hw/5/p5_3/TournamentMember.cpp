/*
CH08-320142
TournamentMember.cpp
Aayush Sharma Acharya
a.sharmaacharya@jacobs-university.de
*/

#include <iostream>
#include <cstring>
#include "TournamentMember.h"

std::string TournamentMember::location = "__UNKNOWN__";

//constructors

TournamentMember::TournamentMember(){
	std::cout<<"tournament member default constructor being called"<<std::endl;
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
	std::cout 
		<< "tournament member parametric constructor being called" 
		<< std::endl;
	strcpy(this->fname, fname);
	strcpy(this->lname, lname);
	strcpy(this->dob,dob);
	this->role = role;
	this->country = country;

}

TournamentMember::TournamentMember(const TournamentMember& other){
	std::cout<<"tournament member copy constructor being called"<<std::endl;
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
void TournamentMember::printTournament(){
	std::cout << "First Name: " << fname << std::endl
		<< "Last Name: " << lname << std::endl
		<< "Date of Birth: " << dob << std::endl
		<< "Location: " << location << std::endl
		<< "role: " << role << std::endl
		<< "Country: " << country << std::endl;
}

/************ Player ***********/
Player::Player(): TournamentMember(
		"PlayerFName", 
		"PlayerLName", 
		"1998-07-09", 
		"Player", 
		"Wakanda") {
	std::cout << "Player Constructed with default values" << std::endl;
	number = 0;
	position = "Forward";
	goal = 0;
	isRightFooted = true;
}

Player::Player(
		char const fname[], 
		char const lname[], 
		char const dob[], 
		const std::string& role,
		const std::string& country, 
		int number, 
		const std::string& position, 
		bool isRightFooted)
	:TournamentMember( fname, lname, dob, role, country ){
	std::cout << "Player Constructed with parametric constructor" << std::endl;
	this->number = number;
	this->position = position;
	this->isRightFooted = isRightFooted;
	this->goal = 0;
}

Player::Player(const Player& p)
	:TournamentMember(p.fname, p.lname, p.dob, p.role, p.country){
	std::cout << "Player Constructed with copy constructor" << std::endl;
	this->number = p.number;
	this->position = p.position;
	this->goal = p.goal;
	this->isRightFooted = p.isRightFooted;
}

void Player::printPlayer(){
	std::cout << "First Name: " << fname << std::endl
		<< "Last Name: " << lname << std::endl
		<< "Date of Birth: " << dob << std::endl
		<< "Location: " << location << std::endl
		<< "role: " << role << std::endl
		<< "Country: " << country << std::endl
		<< "Number: " << number << std::endl
		<< "position: " << position << std::endl
		<< "Goals: " << goal << std::endl
		<< "isRightFooted?: " << isRightFooted << std::endl;
}

Player::~Player(){
	std::cout << "Player Destructed" << std::endl;
}

void Player::incGoal(){ 
	goal++; 
}
