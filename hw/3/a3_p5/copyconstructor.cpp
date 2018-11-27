/*
CH08-320142
copyconstructor.cpp
Aayush Sharma Acharya
a.sharmaacharya@jacobs-university.de
*/

#include <iostream>
#include <cstring> 

using namespace std;

class NaiveString {
	private:
		char *str;
	public:
		NaiveString(const char*);
		NaiveString(const NaiveString&);
		~NaiveString();
		void update(char, char);
		void print();

};

NaiveString::NaiveString(const char* t) {
	cout << "parametric connstructor called" <<endl;
	str = new char[strlen(t) + 1];
	strcpy(str, t);
}


NaiveString::NaiveString(const NaiveString& src) {
	cout << "copy constructor called" <<endl;				//To check if called
	str = new char[strlen(src.str) + 1];
	strcpy(str, src.str);
}

void NaiveString::update(char oldchar, char newchar) {
	unsigned int i;
	for (i = 0; i < strlen(str); i++) 
		if (str[i] == oldchar)
			str[i] = newchar;
}

void NaiveString::print() {
	cout << str << endl;
}

// Destructor
NaiveString::~NaiveString(){
	cout << "Destructor being called" << endl;
	delete str;
}

//Function by Val
void funcByVal(NaiveString s) {
	cout << "funcbyval() being called" << endl;
	s.update('B', 'C');
	s.print();
}


//Function by Ref
void funcByRef(NaiveString & s){
	cout << "functionByRef() being called" << endl;
	s.update('B','C');
	s.print();
}

int main(int argc, char** argv)
{
	NaiveString a("aBcBdB");
	a.print();
	cout << "About to call funcbyval()" << endl;
	funcByVal(a);
	a.print();
	cout << endl << endl;

	//Call by Reference
	NaiveString b("BaCBAB");
	b.print();
	cout << "About to call funcbyref()" << endl;
	funcByRef(b);
	b.print();

	return 0;
}
