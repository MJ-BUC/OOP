// Mark Bucaro
// CSCE 306 : Spring 2022
// Lab6 - bucaro_mark_lab6.cpp
// Code Summary: This source code file demonstrates importing the Fruit class and performing a nutritional...
// ...analysis of the data of instantiated food objects.

#include "Fruit.h"
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;


int main() {
    cout << "Welcome to lab 5!" << endl << endl;

    // instantiates 3 Fruit objects an apple, banana, and kiwi
    Fruit apple = Fruit("Apple", 100, 62, 0.19, 0.21, 14.8);
    Fruit banana = Fruit("Banana", 100, 85, 0.73, 0.22, 20.1);
    Fruit kiwi = Fruit("Kiwi", 100, 58, 1.06, 0.44, 14.00);
    Fruit orange = Fruit("Orange", 100, 52, 0.91, 0.15, 11.8);
    Fruit pear = Fruit("Pear", 100, 63, 0.38, 0.16, 15.1);
    // prints the information each object holds
    apple.to_string();
    banana.to_string();
    kiwi.to_string();
    orange.to_string();
    pear.to_string();

    cout << "Thank you!" << endl;

    return 0;
}
