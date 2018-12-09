/*
    CH08-320142
    fraction.cpp
    Yiping Deng
    y.deng@jacobs-university.de
*/
#include <iostream>
#include "fraction.h"

Fraction::Fraction()
{
    num = 1;
    den = 1;
}

Fraction::Fraction(int n, int d)
{
    if(d < 0){
        n = n * -1;
        d = d * -1;
    }

    int tmp_gcd = gcd(n, d);

    num = n / tmp_gcd;
    den = d / tmp_gcd;
}

int Fraction::gcd(int a, int b)
{
    if(a < 0)
        a = a * -1;
    if(b < 0)
        b = b * -1;
    //make sure it is not negative
    if(a == b)
        return a;
    else if(a > b)
        return gcd(a - b, b);
    else
        return gcd(b - a, a);
    // Implement GCD of two numbers;
}

int Fraction::lcm(int a, int b)
{
    return a * b / gcd(a, b);
}

std::istream& operator>>(std::istream& is, Fraction& f){
    is >> f.num >> f.den;
    //directly input, check later
    if(!is || f.den == 0){ //if it is not valid
        f.num = 1;
        f.den = 1;
        return is;
    }

    if(f.den < 0){
        f.num = f.num * -1;
        f.den = f.den * -1;
        //flip
    }

    int tmp_gcd = f.gcd(f.num, f.den);
    f.num = f.num / tmp_gcd;
    f.den = f.den / tmp_gcd;
    return is;
}

std::ostream& operator<<(std::ostream& os, const Fraction& f) {
    os << f.num << "/" << f.den;//don't print endl
    return os;
}

Fraction operator*(const Fraction& f1, const Fraction& f2){
    return Fraction(f1.num * f2.num, f1.den * f2.den);
}

Fraction operator/(const Fraction& f1, const Fraction& f2){
    return Fraction(f1.num * f2.den, f1.den * f2.num); //calculate the division
}

Fraction operator+(const Fraction& f1, const Fraction& f2){
    return Fraction(f1.num * f2.den + f2.num * f1.den, f1.den * f2.den);
}

Fraction operator-(const Fraction& f1, const Fraction& f2){
    return Fraction(f1.num * f2.den - f2.num * f1.den, f1.den * f2.den);
}

Fraction& Fraction::operator=(const Fraction& other){
    num = other.num;
    den = other.den;
    return *this;
} //assignment operator

bool operator==(const Fraction& f1, const Fraction& f2){
    return (f1.num == f2.num && f1.den == f2.den);
}

bool operator>(const Fraction& f1, const Fraction& f2){
    //already guarenteed the den is not negative
    return (f1.num * f2.den > f2.num * f1.den);
}

bool operator<(const Fraction& f1, const Fraction& f2){
    //already guarenteed the den is not negative
    return (f1.num* f2.den < f2.num * f1.den);
}

