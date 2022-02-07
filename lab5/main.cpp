// Mark Bucaro
// CSCE 306 : Spring 2022
// Lab5 - bucaro_mark_lab5.cpp
// Code Summary: This source code file demonstrates importing the Fruit Class and calling the to-string method...
// ...which prints out a summary of the food type data.

#include "Fruit.h"
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;


int main() {

    Fruit apple = Fruit("Apple");
    Fruit banana = Fruit("Banana");
    Fruit kiwi = Fruit("Kiwi");
    apple.to_string();
    banana.to_string();
    kiwi.to_string();

    return 0;
}
