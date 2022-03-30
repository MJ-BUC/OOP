// Mark Bucaro
// CSCE 306: Spring 2022
// Class Inheritance
// Person will be the base class
// file: Person.cpp

#include "Person.h"
#include "String"
using namespace std;

Person::Person(){}

Person::Person(std::string a_fname, int an_age, std::string a_lname)
        : firstname{a_fname}, personage{an_age}, lastname{a_lname} {}

string Person::get_first(){
    return firstname;
}

int Person::get_age(){
    return personage;
}

string Person::get_last(){
    return lastname;
}

void Person::set_first(int age){
    this->firstname = age;
}

void Person::set_age(std::string fname){
    this->personage = fname;
}

void Person::set_last(std::string lname){
    this->lastname = lname;
}