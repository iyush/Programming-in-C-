/*
	CH08-320142
	TournamentMember.h
	Aayush Sharma Acharya
	a.sharmaacharya@jacobs-university.de
*/

#include <string>
class TournamentMember{
	protected:
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
		void printTournament();
};

class Player: public TournamentMember {
	private:
		int number;
		std::string position;
		int goal;
		bool isRightFooted;
	
	public:
		//constructors
		Player();
		Player(
				char const [], 
				char const [], 
				char const [], 
				const std::string&,
			   	const std::string&, 
				int, 
				const std::string&,
			   	bool);

		Player(const Player&);

		//Destructor
		~Player();

		//setters
		void setNumber(int n){ this->number = n; };
		void setPosition(int p){ this->position= p; };
		//void setGoal(int g){ this->goal= g; };
		void setIsRightFooted(bool b){ this->isRightFooted = b; };

		//getters
		const int getNumber(){ return number; };
		const std::string& getPosition(){ return position; }
		const int getGoal() { return goal; }
		const bool getisRightFooted() {return isRightFooted; }
		
		//additional methods
		void printPlayer();
		void incGoal();
};

class Referee: public TournamentMember{
	private:
		int yellowCardCount = 0;
		Player *yellowCardList[50];
		int redCardCount = 0;
		Player *redCardList[50];

	public:
		bool addToYellowCardList(Player *p);
		bool addToRedCardList(Player *p);
		int getYellowCardCount(){return yellowCardCount;}
		int getRedCardCount(){return redCardCount;}
};
