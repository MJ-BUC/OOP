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
    cout << "Welcome to lab 5!" << endl << endl;

    Fruit apple = Fruit("Apple", 100, 150, 50.0, 60.0, 750.00);
    Fruit banana = Fruit("Banana", 2, 85, 120.0, 12.0, 80.00);
    Fruit kiwi = Fruit("Kiwi", 70, 300, 30.0, 20.0, 40.00);
    apple.to_string();
    banana.to_string();
    kiwi.to_string();

    cout << "Thank you!" << endl;

    return 0;
}
