/*
CH08-320142
Vector.cpp
Aayush Sharma Acharya
a.sharmaacharya@jacobs-university.de
*/
#include "Vector.h"
#include <iostream>
#include <cstring>
#include<cmath>
using namespace std;

//Empty Constructor
Vector::Vector(): vec_array(NULL), size(0) {}

//Constructor
Vector::Vector(int s): size(s){
    vec_array = new double[s];
}

//Copy Constructor
Vector::Vector(const Vector& v):size(v.size){
    vec_array = new double(v.size);
    memcpy(vec_array, v.vec_array, sizeof(double)*size);
    //Copy from one vector to other
}

//Destructor
Vector::~Vector(){
    if(vec_array!=NULL){
        delete [] vec_array; //if array is null, if its not null deletes it.
    }
}

//setters
void Vector::setAtPos(int i, double item){
    if (i >= size){
        cout << "Size not equal!" <<endl;
        exit(1);                //Checks if index is larger than the array.
    }
    vec_array[i] = item;
}

//getter
double Vector::getAt(int index) const{
    return vec_array[index];
}

//computations


double Vector::norm() const{
    double sum = 0;
    for (int i = 0; i <size; i++){
        sum+= vec_array[i] * vec_array[i];
    }
    return sqrt(sum);
}

Vector Vector::sum(const Vector& v){
    if (v.size != size){
        cout << "Size not equal!" <<endl;
        exit(1);
    }
    Vector v_sum(size);
    for (int i = 0;i<size;i++){
        v_sum.setAtPos(i,v.getAt(i) + vec_array[i]); //sum
    }
    return v_sum;
}

Vector Vector::difference(const Vector& v){
    if (v.size != size){
        cout << "Size not equal!" <<endl;
        exit(1);
    }
    Vector v_diff(size);
    for (int i = 0;i<size;i++){
        v_diff.setAtPos(i,v.getAt(i) - vec_array[i]); //sum
    }
    return v_diff;
}

double Vector::scalar(const Vector& v){
    if (v.size != size){
        cout << "Size not equal!" <<endl;
        exit(1);
    }
    double sum = 0;
    for (int i = 0;i<size;i++){
        sum += v.getAt(i) * vec_array[i]; //Scalar product
    }

    return sum;
}

//Print
void Vector::print(){
    for (int i = 0; i< size; i++){
        cout << "\t" << vec_array[i] << "\t";
    }
    cout << endl;
}