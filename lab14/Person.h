// Clinton Garwood
// CSCE 306 : Spring 2022
// Lab13 - Person.h

#include <iostream>
#include <string>
using namespace std;

#ifndef PERSON_PERSON_H
#define PERSON_PERSON_H

class Person {
public:
    Person();
    Person(int);
    Person(int,std::string);
    Person(int,std::string,std::string);

    // Print out person data
    void report_person_data();

    int get_person_year();
    std::string get_person_name();
    std::string get_person_location();

protected:
    void set_birth_year(int);
    void set_location(std::string);
    void set_person_name(std::string);

    std::string p_location;
    int p_birth_year = 2022;
    std::string p_name;

private:
};


#endif //PERSON_PERSON_H