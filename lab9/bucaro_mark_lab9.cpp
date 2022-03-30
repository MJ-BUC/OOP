// Mark Bucaro
// CSCE 306 : Spring 2022
// Lab9 - bucaro_mark_lab9.cpp
// This source code file demonstrates Object Instantiation in a single page CPP application.

#include <iostream>
#include "Person.h"
using namespace std;

void printingHelper(Person person) {
    cout << "Hi! My name is " << person.get_fname() + " " + person.get_lname() << " and I am " << person.get_age() << " years old." << endl;
}

int main() {
    Person person1("Jimmy", 20, "Bob");
    Person person2("John", 19, "Doe");
    Person person3("Bob", 43, "Joe");
    Person person4("Joe", 70, "Bob");
    Person person5("Richard", 54, "Johnson");
    Person person6("Tim", 33, "Richards");

    cout << "Welcome to lab 9" << endl << endl;

    printingHelper(person1);
    printingHelper(person2);
    printingHelper(person3);
    printingHelper(person4);
    printingHelper(person5);
    printingHelper(person6);

    cout << "\nThank you." << endl;
    return 0;
}
