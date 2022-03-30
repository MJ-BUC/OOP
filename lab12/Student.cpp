// Mark Bucaro
// CSCE 306: Spring 2022
// Class Inheritance
// Student will be derived from Person
// file: Dog.cpp

#include <iostream>
#include <String>
#include "Student.h"
#include "Person.h"
using namespace std;

Student::Student(std::string studmajor, int idnum, float gradepoint, std::string a_fname, int an_age, std::string a_lname)
        : major{studmajor}, id{idnum}, gpa{gradepoint}, isPerson(a_fname, an_age, a_lname){}


std::string Student::get_major() {
    return this->major;
}    // i.e., collie, husky, dane, golden

int Student::get_id(){
    return this->id;
}; // in pounds

float Student::get_gpa(){
    return this->gpa;
}; // in inches

std::string Student::get_student_fname() {
    return this->isPerson.get_fname();
}

int Student::get_student_age() {
    return this->isPerson.get_age();
}

std::string Student::get_student_lname() {
    return this->isPerson.get_lname();
}