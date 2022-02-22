// Mark Bucaro
// CSCE 306 : Spring 2022
// Lab7 - bucaro_mark_lab7.cpp
// This source code file demonstrates reference variables, pointer variables, and  de-referencing...
// ...in a single page CPP application.

#include <iostream>
#include <string>
#include <array>
using namespace std;


int main() {
    // variables
    int my_integer = 11;
    double my_double = 11.11;
    string ten_ten = "ten ten";
    int int_array_five[5]={0,1,2,3,4,};
    std::array<int, 5> std_int_array{{10,11,12,13,14}};

    cout << "Welcome to lab 7!" << endl << endl;

    // printing for my_integer
    cout << "\t --Data for variable my_integer--" << endl;
    cout << "\t\t Variable Value: " << my_integer << endl;
    cout << "\t\t Memory reference location: " << &my_integer << endl << endl;

    // printing for my_double
    cout << "\t --Data for variable my_double--" << endl;
    cout << "\t\t Variable Value: " << my_double << endl;
    cout << "\t\t Memory reference location: " << &my_double << endl << endl;

    // printing for ten_ten
    cout << "\t --Data for variable ten_ten--" << endl;
    cout << "\t\t Variable Value: " << ten_ten << endl;
    cout << "\t\t Memory reference location: " << &ten_ten << endl << endl;

    // printing for int_array_five
    cout << "\t --Data for variable int_array_fiver--" << endl;
    cout << "\t\t Variable Value: ";
    for (int i = 0; i < 5; i++) {
        cout << int_array_five[i] << ", ";
    }
    cout << "\n\t\t Memory reference location: " << &int_array_five << endl << endl;

    // printing for std_int_array
    cout << "\t --Data for variable std_int_array--" << endl;
    cout << "\t\t Variable Value: ";
    for (int i = 0; i < std_int_array.size(); i++) {
        cout << std_int_array[i] << ", ";
    }
    cout << "\n\t\t Memory reference location: " << &std_int_array << endl << endl;

    cout << "====================================================================" << endl << endl;

    // reference variables
    int& my_int_ref{my_integer};
    double &my_dbl_ref{my_double};
    string & my_str_ref{ten_ten};
    int (&my_array_ref)[5] = int_array_five;
    std::array<int, 5>& std_array_ref = std_int_array;


    // printing for my_integer
    cout << "\t --Data for reference variable my_int_ref--" << endl;
    cout << "\t\t Variable Value: " << my_int_ref << endl;
    cout << "\t\t Memory reference location: " << &my_int_ref << endl << endl;

    // printing for my_double
    cout << "\t --Data for reference variable my_dbl_ref--" << endl;
    cout << "\t\t Variable Value: " << my_dbl_ref << endl;
    cout << "\t\t Memory reference location: " << &my_dbl_ref << endl << endl;

    // printing for ten_ten
    cout << "\t --Data for reference variable my_str_ref--" << endl;
    cout << "\t\t Variable Value: " << my_str_ref << endl;
    cout << "\t\t Memory reference location: " << &my_str_ref << endl << endl;

    // printing for int_array_five
    cout << "\t --Data for reference variable my_array_ref--" << endl;
    cout << "\t\t Variable Value: ";
    for (int i = 0; i < 5; i++) {
        cout << my_array_ref[i] << ", ";
    }
    cout << "\n\t\t Memory reference location: " << &my_array_ref << endl << endl;

    // printing for std_int_array
    cout << "\t --Data for reference variable std_array_ref--" << endl;
    cout << "\t\t Variable Value: ";
    for (int i = 0; i < std_array_ref.size(); i++) {
        cout << std_array_ref[i] << ", ";
    }
    cout << "\n\t\t Memory reference location: " << &std_array_ref << endl << endl;

    cout << "====================================================================" << endl << endl;

    // pointer variables
    int* my_int_ptr = &my_integer;
    double *my_dbl_ptr = &my_double;
    string * my_str_ptr = &ten_ten;
    int* my_array_ptr = int_array_five;
    int* std_array_ptr = std_int_array.data();


    // printing for my_integer
    cout << "\t --Data for de-reference variable my_int_ptr--" << endl;
    cout << "\t\t Variable Value: " << *my_int_ptr << endl;
    cout << "\t\t de-referenced memory location: " << my_int_ptr << endl << endl;

    // printing for my_double
    cout << "\t --Data for de-reference variable my_dbl_ptr--" << endl;
    cout << "\t\t Variable Value: " << *my_dbl_ptr << endl;
    cout << "\t\t de-referenced memory location: " << my_dbl_ptr << endl << endl;

    // printing for ten_ten
    cout << "\t --Data for de-reference variable my_str_ptr--" << endl;
    cout << "\t\t Variable Value: " << *my_str_ptr << endl;
    cout << "\t\t de-referenced memory location: " << my_str_ptr << endl << endl;

    // printing for int_array_five
    cout << "\t --Data for de-reference variable my_array_ptr--" << endl;
    cout << "\t\t Array Values: ";
    for (int i = 0; i < 5; i++) {
        cout << my_array_ptr[i] << ", ";
    }
    cout << "\n\t\t de-referenced memory location: " << my_array_ptr << endl << endl;

    // printing for std_int_array
    cout << "\t --Data for de-reference variable std_array_ptr--" << endl;
    cout << "\t\t Array Values: ";
    for (int i = 0; i < 5; i++) {
        cout << std_array_ptr[i] << ", ";
    }
    cout << "\n\t\t de-referenced memory location: " << std_array_ptr << endl << endl;


    cout << "Thank you." << endl;

    return 0;
}
