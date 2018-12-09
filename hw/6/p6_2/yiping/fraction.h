/*
    CH08-320142
    fraction.h
    Yiping Deng
    y.deng@jacobs-university.de
*/
// simple class for fractions

#ifndef FRACTION_H_
#define FRACTION_H_
#include <iostream>
class Fraction {
    friend std::istream& operator>>(std::istream& is, Fraction& f);
    friend Fraction operator*(const Fraction& f1, const Fraction& f2);
    friend Fraction operator/(const Fraction& f1, const Fraction& f2);
    friend Fraction operator+(const Fraction& f1, const Fraction& f2);
    friend Fraction operator-(const Fraction& f1, const Fraction& f2);
    friend bool operator==(const Fraction& f1, const Fraction& f2); //would not make any sense without it and define ordering
    friend bool operator<(const Fraction& f1, const Fraction& f2);
    friend bool operator>(const Fraction& f1, const Fraction& f2);
    friend std::ostream& operator<<(std::ostream& os, const Fraction& f);
    //allow member access

private:                        // internal implementation is hidden
    int num;                    // numerator
    int den;                    // denominator

    static int gcd(int a, int b);        // calculates the gcd of a and b
    //make it static as a auxillary function

    static int lcm(int a, int b);
    //make it static as a auxillary function

public:
    Fraction();                    // empty constructor
    Fraction(int, int = 1);     // constructor taking values for fractions and
    Fraction& operator=(const Fraction& other); // assignment operator
                                // integers. Denominator by default is 1
};

//operator overloading
std::istream& operator>>(std::istream& is, Fraction& f);
std::ostream& operator<<(std::ostream& os, const Fraction& f);
Fraction operator*(const Fraction& f1, const Fraction& f2);
Fraction operator/(const Fraction& f1, const Fraction& f2);
Fraction operator+(const Fraction& f1, const Fraction& f2);
Fraction operator-(const Fraction& f1, const Fraction& f2);
bool operator==(const Fraction& f1, const Fraction& f2); //would not make any sense without it and define ordering
bool operator<(const Fraction& f1, const Fraction& f2);
bool operator>(const Fraction& f1, const Fraction& f2);


#endif /* FRACTION_H_ */
