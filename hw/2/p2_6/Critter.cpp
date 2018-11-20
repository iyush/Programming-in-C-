#include <iostream>
#include "Critter.h"

//using namespace std;
using namespace Critter;

void setName(std::string& newname) {
	name = newname;
}

void setHunger(int newhunger) {
	hunger = newhunger;
}

void print() {
        std::cout << "I am " << name << ". My hunger level is " << hunger << "." << std::endl;
}

int getHunger() {
	return hunger;
}
