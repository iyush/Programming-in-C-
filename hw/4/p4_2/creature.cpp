/*
CH08-320142
creature.cpp
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

Creature::Creature(): distance(10){}    

void Creature::run() const
{ 
    cout << "running " << distance << " meters!\n";
}  


/***************** Wizard ********************/
class Wizard : public Creature {
    public:
        Wizard();
        ~Wizard();
        void hover() const;

    private:
        int distFactor;
};

// Constructor
Wizard::Wizard() : distFactor(3)
{
    cout << "Wizard created" <<endl;
}  

//Method
void Wizard::hover() const
{
    cout << "hovering " << (distFactor * distance) << " meters!\n";
}

//Destructor
Wizard::~Wizard(){
    cout << "Wizard dead" <<endl;
}

/***************** Dragon ********************/

class Dragon : public Creature {
    private:
        int flyFactor;

    public: 
        Dragon();
        ~Dragon();
        void Flying() const;
};

//Constructor
Dragon::Dragon() : flyFactor(15){
    cout << "Dragon created" <<endl;
}

//Method
void Dragon::Flying() const{
    cout << "Dragon is flying for " 
         << (flyFactor * distance) 
         << " meters!" << endl;
}
//Destructor
Dragon::~Dragon(){
    cout << "Dragon dead" <<endl;
}

/***************** BlackSmith ********************/

class BlackSmith : public Creature{
    private:
        int hammered;

    public:
        BlackSmith();
        ~BlackSmith();
        void tired() const;
};

//Constructor
BlackSmith::BlackSmith(): hammered(5) {
    cout << "Blacksmith created" <<endl;
}

//Method
void BlackSmith::tired()const{
    cout 
        << "The blacksmit hammered for " 
        << hammered 
        << " hours straight" 
        <<". Now all he need is run for " 
        << (hammered * distance) << " meters\n" << endl;
}
//Destructor
BlackSmith::~BlackSmith(){
    cout << "BlackSmith dead" <<endl;
}

/**************** Main Function ***********************/

int main()
{ 
    cout << "Creating an Creature.\n";
    Creature c;
    c.run();

    cout << "\nCreating a Wizard.\n";
    Wizard w;
    w.run();
    w.hover();

    cout << "\nCreating a Dragon.\n";
    Dragon d;
    d.run();
    d.Flying();

    cout << "\nCreating a Black Smith.\n";
    BlackSmith bs;
    bs.run();
    bs.tired();

    return 0;
} 
