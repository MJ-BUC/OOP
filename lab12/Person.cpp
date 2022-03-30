// Mark Bucaro
// CSCE 306: Spring 2022
// Class Inheritance
// Person will be the base class
// file: Person.cpp

#include <iostream>
#include <String>
#include "Person.h"
using namespace std;

Person::Person(){}

Person::Person(std::string a_fname, int an_age, std::string a_lname)
        : fname{a_fname}, age{an_age}, lname{a_lname} {}

string Person::get_fname(){
    return fname;
}

int Person::get_age(){
    return age;
}

string Person::get_lname(){
    return lname;
}

void Person::set_age(int personage){
    this->age = personage;
}

void Person::set_fname(std::string firstname){
    this->fname = firstname;
}

void Person::set_lname(std::string lastname){
    this->lname = lastname;
}