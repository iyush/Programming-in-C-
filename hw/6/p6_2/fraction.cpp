/*
	CH08-320142
	fraction.cpp
	Aayush Sharma Acharya
	a.sharmaacharya@jacobs-university.de
*/
#include <iostream>
#include <limits>
#include "fraction.h"

Fraction::Fraction()
{
	num = 1;
	den = 1;
}

Fraction::Fraction(int n, int d)
{
	if (d == 0){
		std::cout << "Invalid Fraction" << std::endl;
		exit(1);
	}else if(n == 0 ){
		num = 0;
		den = d;
	}else if(d < 0||n < 0){
		num = n *-1;
		den = d *-1;
	}else{
		int tmp_gcd = gcd(n, d);
		num = n / tmp_gcd;
		den = d / tmp_gcd;
	}
}

int Fraction::gcd(int a, int b)
{
	int max = INT8_MIN;
	for (int i = 1; i <= a; i ++){
		for(int j = 1; j <= b; j++){
			if (a % i == 0 && b % j == 0){	
				//the factors themselves
				if (i == j){					
					//the common factors
					if (i > max){
						max = i; 
						//stores the biggest common factor
					}
				}
			}
		}
	}
	return max;
}

int Fraction::lcm(int a, int b)
{
	return a * b / gcd(a, b);

}

//overloaded operations
std::ostream& operator<<(std::ostream& out, const Fraction& in){
	return out << in.num << "/" << in.den;
}

std::istream& operator>>(std::istream& in, Fraction& f1){
	in >> f1.num;
	in >> f1.den;
	int tmp_gcd = f1.gcd(f1.num, f1.den);
	f1.num = f1.num / tmp_gcd;
	f1.den = f1.den / tmp_gcd;
	return in;
}

//Multiplication and Division

Fraction Fraction::operator*(Fraction& o){
	int tnum = this->num * o.num;
	int tden = this->den * o.den;
	int tgcd = o.gcd(tnum,tden);
	tnum /= tgcd;
	tden /= tgcd;
	Fraction product(tnum, tden);
	return product;
}


Fraction Fraction::operator/(Fraction& o){
	int tnum = this->num * o.den;
	int tden = this->den * o.num;
	int tgcd = o.gcd(tnum,tden);
	tnum /= tgcd;
	tden /= tgcd;
	Fraction product(tnum, tden);
	return product;
}

//Additions and Substraction

Fraction Fraction::operator+(Fraction& o){
	int a = this->num;
	int b = this->den;
	int c = o.num;
	int d = o.den;
	int tnum = a*o.lcm(b,d)/b + c*o.lcm(b,d)/d;
	int tden = o.lcm(b,d);
	Fraction sum(tnum,tden);
	return sum;
}

Fraction Fraction::operator-(Fraction& o){
	int a = this->num;
	int b = this->den;
	int c = o.num;
	int d = o.den;
	int tnum ;
	tnum = a * d - c * b;
	int tden = b*d;
	Fraction difference(tnum, tden);
	return difference;
}

// Greater and Smaller
bool operator>(const Fraction& a, const Fraction& b){
	return a.num * b.den > a.den * b.num;
}
bool operator<(const Fraction& a, const Fraction& b){
	return a.num * b.den < a.den * b.num;
}
