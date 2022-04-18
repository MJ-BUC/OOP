// Clinton Garwood
// CSCE 306 : Spring 2022
// Lab13 - Person.cpp

#include <iostream>
#include <string>
#include "Person.h"
using namespace std;

// Empty constructor
Person::Person(){}

// Create person with just birth year
Person::Person(int b_year)
        : p_birth_year{b_year}
{}

// Create person with birth year and location
Person::Person(int b_year,std::string loc)
        : p_birth_year{b_year}, p_location{loc}
{}

// Create person with birth year, location, and name
Person::Person(int b_year,std::string loc,std::string name)
        : p_birth_year{b_year}, p_location{loc}, p_name{name}
{}


void Person::set_birth_year(int b_year){
    this->p_birth_year = b_year;
}
void Person::set_location(std::string loc){
    this->p_location = loc;
}
void Person::set_person_name(std::string name){
    this->p_name = name;
}

int Person::get_person_year(){
    return this->p_birth_year;
}
std::string Person::get_person_location(){
    return this->p_location;
}

std::string Person::get_person_name(){
    return this->p_name;
}

// Print out person data
void Person::report_person_data(){
    cout << "Person Name: " << get_person_name() << endl;
    cout << "Born on Date: " << get_person_year() << endl;
    cout << "Location Info: " << get_person_location() << endl;
}