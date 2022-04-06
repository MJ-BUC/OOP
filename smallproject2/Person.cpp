// Mark Bucaro
// CSCE 306: Spring 2022
// Class Inheritance
// Person will be the base class
// file: Person.cpp

#include <iostream>
#include <String>
#include "Person.h"
using namespace std;

Person::Person(){}

Person::Person(std::string a_fname, std::string a_lname)
        : fname{a_fname}, lname{a_lname} {}

Person::Person(std::string a_fname, std::string a_lname, std::string a_movie, std::string a_music, std::string a_game)
        : fname{a_fname}, lname{a_lname}, movie{a_movie}, music{a_music}, game{a_game} {}

// get the first name
string Person::get_fname(){
    return fname;
}

// get the last name
string Person::get_lname(){
    return lname;
}

string Person::get_movie(){
    return movie;
}

string Person::get_music(){
    return music;
}

string Person::get_game(){
    return game;
}

//set the first name
void Person::set_fname(std::string firstname){
    this->fname = firstname;
}

// set the last name
void Person::set_lname(std::string lastname){
    this->lname = lastname;
}

void Person::set_movie(std::string favmovie){
    this->lname = favmovie;
}

void Person::set_music(std::string favmusic){
    this->lname = favmusic;
}

void Person::set_game(std::string favgame){
    this->lname = favgame;
}