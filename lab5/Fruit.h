// Mark Bucaro
// CSCE 306 : Spring 2022
// Lab5 - Fruit.h
// Class file as a header only for lab 5 and 6 named Fruit.h

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class Fruit {

public:
    Fruit(std::string name) {
        set_fruit_name(name);
    }

    void set_fruit_name(std::string new_name) {
        fruit_name = new_name;
    }
    
    std::string get_fruit_name() {
        return fruit_name;
    }

    void to_string() {
        cout << "Fruit name: " << get_fruit_name() << endl;
    }

private:
    string fruit_name;

    string portion_label;
    int portion_quantity;
    string portion_unit;

    string energy_label;
    int energy_quantity;
    string energy_unit;

    string protein_label;
    int protein_quantity;
    string protein_unit;

    string lipids_label;
    int lipids_quantity;
    string lipids_unit;

    string carbs_label;
    int carbs_quantity;
    string carbs_unit;
};
