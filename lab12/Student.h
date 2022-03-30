// Mark Bucaro
// CSCE 306: Spring 2022
// Class Inheritance
// Students will be derived from Person
// file: Dog.h

#include <iostream>
#include <String>
#include "Person.h"
using namespace std;

#ifndef LAB12_STUDENT_H
#define LAB12_STUDENT_H


class Student : public Person {

public:
//    Dog(std::string unnamed, int unnamed1, std::string unnamed2, std::string type, int pounds, int inches,
//        std::string speaks, std::string knows, Animal isAnimal);
    Student(std::string, int, float, std::string, int, std::string);

    std::string get_major(); // gets the student's major
    int get_id(); // gets the student's id
    float get_gpa(); // gets the student's gpa
    string get_student_fname(); // gets the first name
    int get_student_age(); // gets the age
    string get_student_lname(); // gets the last name

private:
    std::string major; // Student's major
    int id; // Student's id number
    float gpa; // Student's gpa
    Person isPerson; // person obj
};


#endif //LAB12_STUDENT_H
