// Mark Bucaro
// CSCE 306 : Spring 2022
// Lab13 - Student.h

#include <iostream>
#include <vector>
#include <string>
#include "Person.h"
using namespace std;

#ifndef PERSON_STUDENT_H
#define PERSON_STUDENT_H

class Student : public Person, public basic_string<char> {
public:
    // Student constructor given no data
    Student();

    // Student constructor given person object
    Student(Person);

    // Student constructor given no student data / person object
    Student(int, std::string, std::string);

    // Student constructor given data for student object / Person data with no person object
    Student(std::string, int, float, std::string, int, std::string, std::string);

    // Student constructor given data for student object / person object
    Student(std::string, int, float, std::string, Person);

    // Student constructor given data for student object with no person object
    Student(std::string, int, float, std::string);

    std::string get_preferred_name();
    int get_student_id();
    float get_grade_point_average();
    std::string get_degree_pursued();
    std::string get_student_p_name();
    std::string get_student_p_location();
    int get_student_p_year();
    void get_student_person_data();

protected:

    // Setters for student
    void set_preferred_name(std::string);
    void set_student_id(int);
    void set_grade_point_average(float);
    void set_degree_pursued(std::string);

    // Setters for initial data
    std::string establish_student_name();
    int establish_student_id_number();
    float establish_student_gpa();
    std::string establish_student_degee_pursuit();

    int establish_year();
    std::string establish_loc();
    std::string establish_name();

private:
    std::string preferred_name;
    int student_id;
    float grade_point_average;
    std::string degree_pursued;
    Person Student_Person; // date, loc, name

};


#endif //PERSON_STUDENT_H