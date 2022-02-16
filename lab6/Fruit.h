// Mark Bucaro
// CSCE 306 : Spring 2022
// Lab5 - Fruit.h
// Class file as a header only for lab 5 and 6 named Fruit.h

#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
using namespace std;

class Fruit {

public:
    Fruit(std::string name, int portion, int energy, float protein, float lipids, float carbs) {
        // sets the fruit name attribute
        set_fruit_name(name);
        // sets the portion size attribute
        set_portion_quantity(portion);
        // sets the energy attribute
        set_energy_quantity(energy);
        // sets the protein attribute
        set_protein_quantity(protein);
        // sets the lipids attribute
        set_lipids_quantity(lipids);
        // sets the carbs attribute
        set_carbs_quantity(carbs);
    }

    // ========== fruit name ==========
    void set_fruit_name(std::string new_name) {
        fruit_name = new_name;
    }

    std::string get_fruit_name() {
        return fruit_name;
    }
    // ========== fruit name ==========

    // calls the needed get methods to print out everything about a fruit
    void to_string() {
        cout << "\tFruit name: " << get_fruit_name() << endl;
        // print for portion size
        cout << "\t\t" << get_portion_label() << ": " << get_portion_quantity() << "  " << get_portion_unit() << endl;
        // print for energy (calories)
        cout << "\t\t" << get_energy_label() << ": " << get_energy_quantity() << "  " <<  get_energy_unit() << endl;
        // print for protein
        cout << "\t\t" << get_protein_label() << ": " << get_protein_quantity() << "  " <<  get_protein_unit() <<  endl;
        // print for lipids
        cout << "\t\t" << get_lipids_label() << ": " << get_lipids_quantity() << "  " <<  get_lipids_unit() <<  endl;
        // print for carbohydrates
        cout << "\t\t" << get_carbs_label() << ": " << get_carbs_quantity() << "  " <<  get_carbs_unit() <<  endl << endl;
    }

    // ========== portions ==========
    std::string get_portion_label() {
        return portion_label;
    }

    void set_portion_quantity(int quantity) {
        portion_quantity = quantity;
    }

    int get_portion_quantity() {
        return portion_quantity;
    }

    std::string get_portion_unit() {
        return portion_unit;
    }
    // ========== portions ==========


    // ========== energy ==========
    std::string get_energy_label() {
        return energy_label;
    }

    void set_energy_quantity(int quantity) {
        energy_quantity = quantity;
    }

    int get_energy_quantity() {
        return energy_quantity;
    }

    std::string get_energy_unit() {
        return energy_unit;
    }
    // ========== energy ==========


    // ========== protein ==========
    std::string get_protein_label() {
        return protein_label;
    }

    void set_protein_quantity(float quantity) {
        protein_quantity = quantity;
    }

    float get_protein_quantity() {
        return protein_quantity;
    }

    std::string get_protein_unit() {
        return protein_unit;
    }
    // ========== protein ==========


    // ========== lipids ==========
    std::string get_lipids_label() {
        return lipids_label;
    }

    void set_lipids_quantity(float quantity) {
        lipids_quantity = quantity;
    }

    float get_lipids_quantity() {
        return lipids_quantity;
    }

    std::string get_lipids_unit() {
        return lipids_unit;
    }
    // ========== lipids ==========


    // ========== carbs ==========
    std::string get_carbs_label() {
        return carbs_label;
    }

    void set_carbs_quantity(float quantity) {
        carbs_quantity = quantity;
    }

    float get_carbs_quantity() {
        return carbs_quantity;
    }

    std::string get_carbs_unit() {
        return carbs_unit;
    }
    // ========== carbs ==========

    // Display the highest to lowest values of the attributes
    void high_to_low() {

    }

private:
    // variables that will be the different attributes for the Fruit object
    string fruit_name;

    string portion_label = "Portion Size";
    int portion_quantity = 0;
    string portion_unit = "Grams";

    string energy_label = "Energy (Calories)";
    int energy_quantity = 0;
    string energy_unit = "Grams";

    string protein_label = "Protein";
    float protein_quantity = 0.0;
    string protein_unit = "Grams";

    string lipids_label = "Lipids (Fat)";
    float lipids_quantity = 0.0;
    string lipids_unit = "Grams";

    string carbs_label = "Carbohydrates (All)";
    float carbs_quantity = 0.0;
    string carbs_unit = "Grams";

    vector<int> portion_vec;
    vector<int> energy_vec;
    vector<float> protein_vec;
    vector<float> lipids_vec;
    vector<float> carbs_vec;
};
