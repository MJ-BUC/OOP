// Mark Bucaro
// CSCE 306: Spring 2022
// Class Inheritance
// Person will be the base class
// file: Person.h

#include <istream>
#include <String>
using namespace std;

#ifndef LAB9_PERSON_H
#define LAB9_PERSON_H

class Person {
    public:
        Person();
        Person(std::string, int, std::string);
        string get_fname();
        int get_age();
        string get_lname();

        void set_age(int);
        void set_fname(std::string);
        void set_lname(std::string);

        std::string fname; // first name of person
    protected:
        int age; // age of the person
    private:
        std::string lname; // last name of person
};


#endif //LAB9_PERSON_H
