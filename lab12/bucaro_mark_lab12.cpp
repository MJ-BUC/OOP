// Mark Bucaro
// CSCE 306 : Spring 2022
// Lab12 - bucaro_mark_lab12.cpp
//  This source code file demonstrates Pointers and this pointer using a multi-file CPP application.

#include <iostream>
#include <iomanip>
#include "Person.h"
#include "Student.h"
using namespace std;

//printing a person object
void printingHelper(Person person) {
    cout << "Hi! My name is " << person.get_fname() + " " + person.get_lname() << " and I am " << person.get_age() << " years old." << endl;
}

//printing a student object
void studentPrintingHelper(Student student) {
    cout << "My name is " << student.get_student_fname() + " " + student.get_student_lname() << ", my id number is "
    << student.get_id() << ", I am "<< student.get_student_age() << " years old, I am a " << student.get_major() << " major, and my gpa is a " <<
    setprecision(1) << fixed << student.get_gpa() << endl;
}

int main() {
    Person person1("Jimmy", 20, "Bob");
    Person person2("John", 19, "Doe");
    Person person3("Bob", 43, "Joe");
    Person person4("Joe", 70, "Bob");
    Person person5("Richard", 54, "Johnson");
    Person person6("Tim", 33, "Richards");

    Student student1("Computer Science", 12345, 4.0, "Jimmy", 20, "Bob");
    Student student2("Biology", 13375, 3.0, "John", 19, "Doe");
    Student student3("Music", 12649, 2.9, "Bob", 43, "Joe");
    Student student4("Art", 13385, 3.6, "Joe", 70, "Bob");
    Student student5("Chemistry", 11740, 3.3, "Richard", 54, "Johnson");
    Student student6("Math", 14385, 3.4, "Tim", 33, "Richards");

    cout << "Welcome to lab 9" << endl << endl;

    printingHelper(person1);
    printingHelper(person2);
    printingHelper(person3);
    printingHelper(person4);
    printingHelper(person5);
    printingHelper(person6);

    cout << "\n";

    studentPrintingHelper(student1);
    studentPrintingHelper(student2);
    studentPrintingHelper(student3);
    studentPrintingHelper(student4);
    studentPrintingHelper(student5);
    studentPrintingHelper(student6);

    cout << "\nThank you." << endl;
    return 0;
}
