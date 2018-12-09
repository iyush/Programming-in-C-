/*
CH08-320142
fraction.h
Aayush Sharma Acharya
a.sharmaacharya@jacobs-university.de
*/

// simple class for fractions

#ifndef FRACTION_H_
#define FRACTION_H_

#include <iostream>

class Fraction {

private:						// internal implementation is hidden
	int num;					// numerator
	int den;					// denominator

	int gcd(int a, int b);		// calculates the gcd of a and b
	int lcm(int a, int b);

public:
	Fraction();					// empty constructor
	Fraction(int, int = 1); 	// constructor taking values for fractions and
								// integers. Denominator by default is 1
//	void print();				// prints it to the screen
	
	//overloaded
	friend std::ostream& operator<<(std::ostream&, const Fraction&);
	friend std::istream& operator>>(std::istream&, Fraction&);

	//algebric operations
	Fraction operator*(Fraction&);
	Fraction operator/(Fraction&);
	Fraction operator+(Fraction&);
	Fraction operator-(Fraction&);

	//logical operations
	friend bool operator>(const Fraction&, const Fraction&);
	friend bool operator<(const Fraction&, const Fraction&);
};

#endif /* FRACTION_H_ */
