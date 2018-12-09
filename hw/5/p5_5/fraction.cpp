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
        exit(1);				//If denominator is 0, its invalid
    }else if(n == 0 ){	
        num = 0;
        den = d;
    }else if(d < 0||n < 0) {
        num = n *-1;
        den = d *-1;
    }else{
        int tmp_gcd = gcd(n, d);
        num = n / tmp_gcd;		//Reduce to a uncommon factor
        den = d / tmp_gcd;
    }
}

int Fraction::gcd(int a, int b)
{
	int max = INT8_MIN;
	for (int i = 1; i <= a; i ++){
		for(int j = 1; j <= b; j++){
			//factors
			if (a % i == 0 && b % j == 0){  
				//Common Factors
				if (i == j){				
					if (i > max){
						//Highest Common Factor
						max = i;
					}
				}
			}
		}
	}
	return max;
}

//LCM
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
	f1.num = f1.num / tmp_gcd;	//Reduce to a common factor
	f1.den = f1.den / tmp_gcd;	//Reduce to a common factor
	return in;
}

//Multiplication Overloading
Fraction Fraction::operator*(Fraction& o){
	int tnum = this->num * o.num;
	int tden = this->den * o.den;
	int tgcd = o.gcd(tnum,tden);
	tnum /= tgcd;
	tden /= tgcd;
	Fraction product(tnum, tden);
	return product;
}

//Division Overloading
Fraction Fraction::operator/(Fraction& o){
	int tnum = this->num * o.den;
	int tden = this->den * o.num;
	int tgcd = o.gcd(tnum,tden);
	tnum /= tgcd;
	tden /= tgcd;
	Fraction product(tnum, tden);
	return product;
}
