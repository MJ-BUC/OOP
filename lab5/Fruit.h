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
    Fruit(std::string name, int portion, int energy, float protein, float lipids, float carbs) {
        set_fruit_name(name);
        set_portion_quantity(portion);
        set_energy_quantity(energy);
        set_protein_quantity(protein);
        set_lipids_quantity(lipids);
        set_carbs_quantity(carbs);
    }

    void set_fruit_name(std::string new_name) {
        fruit_name = new_name;
    }

    std::string get_fruit_name() {
        return fruit_name;
    }

    void to_string() {
        cout << "Fruit name: " << get_fruit_name() << endl;
        cout << "\t" << get_portion_label() << endl;
        cout << "\t" << get_portion_quantity() << "  " << get_portion_unit() << endl;
        cout << "\t" << get_energy_label() << endl;
        cout << "\t" << get_energy_quantity() << "  " <<  get_energy_unit() <<  endl;
        cout << "\t" << get_protein_label() << endl;
        cout << "\t" << get_protein_quantity() << "  " <<  get_protein_unit() <<  endl;
        cout << "\t" << get_lipids_label() << endl;
        cout << "\t" << get_lipids_quantity() << "  " <<  get_lipids_unit() <<  endl;
        cout << "\t" << get_carbs_label() << endl;
        cout << "\t" << get_carbs_quantity() << "  " <<  get_carbs_unit() <<  endl << endl;
    }

    // portions
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

    // energy
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

    // protein
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

    // lipids
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

    // carbs
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

private:
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
};
