/*
CH08-320142
TournamentMember.h
Aayush Sharma Acharya
a.sharmaacharya@jacobs-university.de
*/

#include <string>
class TournamentMember{
	private:
		char fname[31];
		char lname[31];
		char dob[11];
		static std::string location;
		std::string role;
		std::string country;

	public:
		//constructors
		TournamentMember();
		TournamentMember(
				char const [], 
				char const [], 
				char const [], 
				const std::string&, 
				const std::string&);
		TournamentMember(const TournamentMember&);
		~TournamentMember();

		//set Methods (Inline setter)
		void setFname(char const f[]){ strcpy(this->fname, f);  }
		void setLname(char const l[]){ strcpy(this->lname, l); }
		void setDob(char const d[]){ strcpy(this->dob, d); }

		//Also a method which changes the location
		void setLocation(const std::string& loc){ this->location = loc; }

		void setRole(const std::string& role){ this->role = role;}
		void setCountry(const std::string& country){ this->country = country;}

		//get Methods (inline getter)
		char* getFname(){ return fname; }
		char* getLname(){ return lname; }
		char* getDob(){ return dob; }
		std::string& getLocation(){ return location; }
		std::string& getRole(){ return role; }
		std::string& getCountry(){ return country; }

		//additional methods
		void print();
};

