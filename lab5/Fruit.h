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

    std::string get_portion_label() {
        return portion_label;
    }

    void set_portion_quantity() {

    }

    int get_portion_quantity() {
        return portion_quantity;
    }

    std::string get_energy_label() {
        return energy_label;
    }

    void set_energy_quantity() {

    }

    int get_energy_quantity() {
        return energy_quantity;
    }

    std::string get_protein_label() {
        return protein_label;
    }

    void set_protein_quantity() {

    }

    int get_protein_quantity() {
        return protein_quantity;
    }

    std::string get_lipids_label() {
        return lipids_label;
    }

    void set_lipids_quantity() {

    }

    int get_lipids_quantity() {
        return lipids_quantity;
    }

    std::string get_carbs_label() {
        return carbs_label;
    }

    void set_carbs_quantity() {

    }

    int get_carbs_quantity() {
        return carbs_quantity;
    }

private:
    string fruit_name;

    string portion_label = "Portion Size";
    int portion_quantity;
    string portion_unit = "Grams";

    string energy_label = "Energy (Calories)";
    int energy_quantity;
    string energy_unit = "Grams";

    string protein_label = "Protein";
    float protein_quantity;
    string protein_unit = "Grams";

    string lipids_label = "Lipids (Fat)";
    float lipids_quantity;
    string lipids_unit = "Grams";

    string carbs_label = "Carbohydrates (All)";
    float carbs_quantity;
    string carbs_unit = "Grams";
};
