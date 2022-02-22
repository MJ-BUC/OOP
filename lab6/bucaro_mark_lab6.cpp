// Mark Bucaro
// CSCE 306 : Spring 2022
// Lab6 - bucaro_mark_lab6.cpp
// Code Summary: This source code file demonstrates importing the Fruit class and performing a nutritional...
// ...analysis of the data of instantiated food objects.

#include "Fruit.h"
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

// compares the calories and returns the larger one
bool CompCal(Fruit aa, Fruit bb) {
    return aa.get_energy_quantity() > bb.get_energy_quantity();
}

// compares the protein and returns the larger one
bool CompProtein(Fruit aa, Fruit bb) {
    return aa.get_protein_quantity() > bb.get_protein_quantity();
}

// compares the lipids and returns the larger one
bool CompLipids(Fruit aa, Fruit bb) {
    return aa.get_lipids_quantity() > bb.get_lipids_quantity();
}

// compares the carbs and returns the larger one
bool CompCarbs(Fruit aa, Fruit bb) {
    return aa.get_carbs_quantity() > bb.get_carbs_quantity();
}

int main() {
    int highest_energy;
    float highest_protein;
    float highest_lipids;
    float highest_carbs;
    string high_energy;
    string high_protein;
    string high_lipids;
    string high_carbs;

    cout << "Welcome to lab 6!" << endl << endl;

    // instantiates 3 Fruit objects an apple, banana, and kiwi
    Fruit apple = Fruit("Apple", 100, 62, 0.19, 0.21, 14.8);
    Fruit banana = Fruit("Banana", 100, 85, 0.73, 0.22, 20.1);
    Fruit kiwi = Fruit("Kiwi", 100, 58, 1.06, 0.44, 14.00);
    Fruit orange = Fruit("Orange", 100, 52, 0.91, 0.15, 11.8);
    Fruit pear = Fruit("Pear", 100, 63, 0.38, 0.16, 15.1);

    // creates an arrays of the fruit objects
    Fruit fruit_basket[] = {apple, banana, kiwi, orange, pear};

    // prints the information each object holds
    for (int i = 0; i < 5; i++) {
        fruit_basket[i].to_string();
    }

    for (int i = 0; i < 5; i++) {
        // determine highest energy (calories)
        if (highest_energy < fruit_basket[i].get_energy_quantity()) {
            highest_energy = fruit_basket[i].get_energy_quantity();
            high_energy = fruit_basket[i].get_fruit_name();
        }

        // determine highest protein
        if (highest_protein < fruit_basket[i].get_protein_quantity()) {
            highest_protein = fruit_basket[i].get_protein_quantity();
            high_protein = fruit_basket[i].get_fruit_name();
        }

        // determine highest lipids
        if (highest_lipids < fruit_basket[i].get_lipids_quantity()) {
            highest_lipids = fruit_basket[i].get_lipids_quantity();
            high_lipids = fruit_basket[i].get_fruit_name();
        }

        // determine highest carbs
        if (highest_carbs < fruit_basket[i].get_carbs_quantity()) {
            highest_carbs = fruit_basket[i].get_carbs_quantity();
            high_carbs = fruit_basket[i].get_fruit_name();
        }
    }

    // prints the highest fruit of each category
    cout << "\tThe fruit with the highest calorie count is " << high_energy << " at " << highest_energy << endl;
    cout << "\tThe fruit with the highest protein count is " << high_protein << " at " << highest_protein << endl;
    cout << "\tThe fruit with the highest lipids count is " << high_lipids << " at " << highest_lipids << endl;
    cout << "\tThe fruit with the highest carbs count is " << high_carbs << " at " << highest_carbs << endl;

    // creates vector of calories and sorts them highest to lowest
    vector<Fruit> fr_vector_cal (fruit_basket, fruit_basket+6);
    sort(fr_vector_cal.begin(), fr_vector_cal.end(),CompCal);
    cout << "\n\tList of fruits by calorie (highest to lowest)" << endl;
    // prints the fruit and the calories from the sorted vector
    for (auto i = begin(fr_vector_cal); i != end(fr_vector_cal); ++i) {
        cout << "\t\t" << i->get_fruit_name() << " has " << i->get_energy_quantity() << " calories" << endl;
    }

    // creates vector of protein and sorts them highest to lowest
    vector<Fruit> fr_vector_protein (fruit_basket, fruit_basket+6);
    sort(fr_vector_protein.begin(), fr_vector_protein.end(), CompProtein);
    cout << "\n\tList of fruits by protein (highest to lowest)" << endl;
    // prints the fruit and the protein from the sorted vector
    for (auto i = begin(fr_vector_protein); i != end(fr_vector_protein); ++i) {
        cout << "\t\t" << i->get_fruit_name() << " has " << i->get_protein_quantity() << " grams" << endl;
    }

    // creates vector of lipids and sorts them highest to lowest
    vector<Fruit> fr_vector_lipids (fruit_basket, fruit_basket+6);
    sort(fr_vector_lipids.begin(), fr_vector_lipids.end(),CompLipids);
    cout << "\n\tList of fruits by lipids (highest to lowest)" << endl;
    // prints the fruit and the lipids from the sorted vector
    for (auto i = begin(fr_vector_lipids); i != end(fr_vector_lipids); ++i) {
        cout << "\t\t" << i->get_fruit_name() << " has " << i->get_lipids_quantity() << " grams" << endl;
    }

    // creates vector of carbs and sorts them highest to lowest
    vector<Fruit> fr_vector_carbs (fruit_basket, fruit_basket+6);
    sort(fr_vector_carbs.begin(), fr_vector_carbs.end(),CompCarbs);
    cout << "\n\tList of fruits by carbs (highest to lowest)" << endl;
    // prints the fruit and the carbs from the sorted vector
    for (auto i = begin(fr_vector_carbs); i != end(fr_vector_carbs); ++i) {
        cout << "\t\t" << i->get_fruit_name() << " has " << i->get_carbs_quantity() << " grams" << endl;
    }

    cout << "\nThank you!" << endl;

    return 0;
}