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
        Person(std::string, std::string);
        Person(std::string, std::string, std::string, std::string, std::string);

        string get_fname();
        string get_lname();
        string get_movie();
        string get_music();
        string get_game();

        void set_fname(std::string);
        void set_lname(std::string);
        void set_movie(std::string);
        void set_music(std::string);
        void set_game(std::string);

        std::string fname; // first name of person
        std::string lname; // last name of person
        std::string movie_genre[3] = {};
    private:
        std::string movie;
        std::string music;
        std::string game;
};


#endif //LAB9_PERSON_H
