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

// gets the student major
std::string Student::get_major() {
    return this->major;
}

// gets the student id
int Student::get_id(){
    return this->id;
}

// gets the student gpa
float Student::get_gpa(){
    return this->gpa;
}

// gets the student first name
std::string Student::get_student_fname() {
    return this->isPerson.get_fname();
}

// gets the student age
int Student::get_student_age() {
    return this->isPerson.get_age();
}

// gets the student last name
std::string Student::get_student_lname() {
    return this->isPerson.get_lname();
}