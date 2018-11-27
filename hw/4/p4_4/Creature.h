/*
CH08-320142
Creature.h
Aayush Sharma Acharya
a.sharmaacharya@jacobs-university.de
*/

#include <iostream>
using namespace std;

class Creature {
	public:
		Creature();  
		void run() const;

	protected:
		int distance;
};

/***************** Wizard ********************/
class Wizard : public Creature {
	public:
		Wizard();               //Constructor
        ~Wizard();              //Destructor
		void hover() const;     

	private:
		int distFactor;
};


/***************** Dragon ********************/

class Dragon : public Creature {
    private:
        int flyFactor;

    public: 
        Dragon();               //Constructor
        ~Dragon();              //Destructor
        void Flying() const;
};


/***************** BlackSmith ********************/

class BlackSmith : public Creature{
    private:
        int hammered;
    
    public:
        BlackSmith();           //Constructor
        ~BlackSmith();          //Destructor
        void tired() const;
};
