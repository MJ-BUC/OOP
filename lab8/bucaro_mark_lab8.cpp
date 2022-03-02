// Mark Bucaro
// CSCE 306 : Spring 2022
// Lab8 - bucaro_mark_lab8.cpp
// This source code file demonstrates passing variable values, references and pointers into...
// ...functions in a CPP application.

#include <iostream>
#include "string"
#include <array>
using namespace std;


void take_simple_variable(int int_value) {
    cout << "\t --Data for variable my_integer--" << endl;
    cout << "\t\t Variable Value: " << int_value << endl;
    cout << "\t\t Memory reference location: " << &int_value << endl << endl;
}

void take_simple_variable(double dbl_value) {
    cout << "\t --Data for variable my_double--" << endl;
    cout << "\t\t Variable Value: " << dbl_value << endl;
    cout << "\t\t Memory reference location: " << &dbl_value << endl << endl;
}

void take_simple_variable(string string_value) {
    cout << "\t --Data for variable ten_ten--" << endl;
    cout << "\t\t Variable Value: " << string_value << endl;
    cout << "\t\t Memory reference location: " << &string_value << endl << endl;
}

void take_simple_variable(int int_array[]) {
    cout << "\t --Data for variable int_array_fiver--" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "\t\tValue at index " << i << " is " << int_array[i] << " with memory location at " << &int_array[i] << endl;
    }
}

template <size_t N>
void take_simple_variable(std::array<int, N> &std_int_array) {
    cout << "\n\t --Data for variable std_int_array--" << endl;
    for (int i = 0; i < std_int_array.size(); i++) {
        cout << "\t\tValue at index " << i << " is " << std_int_array[i] << " with memory location at " << &std_int_array[i] << endl;
    }
}

void take_reference_variable(int int_ref) {
    cout << "\t --Data for reference variable my_integer--" << endl;
    cout << "\t\t Variable Value: " << int_ref << endl;
    cout << "\t\t Memory reference location: " << &int_ref << endl << endl;
}

void take_reference_variable(double dbl_ref) {
    cout << "\t --Data for reference variable my_double--" << endl;
    cout << "\t\t Variable Value: " << dbl_ref << endl;
    cout << "\t\t Memory reference location: " << &dbl_ref << endl << endl;
}

void take_reference_variable(string string_ref) {
    cout << "\t --Data for reference variable ten_ten--" << endl;
    cout << "\t\t Variable Value: " << string_ref << endl;
    cout << "\t\t Memory reference location: " << &string_ref << endl << endl;
}

void take_reference_variable(int int_array_ref[]) {
    cout << "\t --Data for reference variable int_array_fiver--" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "\t\tValue at index " << i << " is " << int_array_ref[i] << " with memory location at " << &int_array_ref[i] << endl;
    }
}

template <size_t N>
void take_reference_variable(std::array<int, N> &std_int_array) {
    cout << "\n\t --Data for reference variable std_int_array--" << endl;
    for (int i = 0; i < std_int_array.size(); i++) {
        cout << "\t\tValue at index " << i << " is " << std_int_array[i] << " with memory location at " << &std_int_array[i] << endl;
    }
}

void take_pointer_variable(int int_ptr) {
    cout << "\t --Data for pointer variable my_integer--" << endl;
    cout << "\t\t Variable Value: " << int_ptr << endl;
    cout << "\t\t Memory reference location: " << &int_ptr << endl << endl;
}

void take_pointer_variable(double dbl_ptr) {
    cout << "\t --Data for pointer variable my_double--" << endl;
    cout << "\t\t Variable Value: " << dbl_ptr << endl;
    cout << "\t\t Memory reference location: " << &dbl_ptr << endl << endl;
}

void take_pointer_variable(string string_ptr) {
    cout << "\t --Data for pointer variable ten_ten--" << endl;
    cout << "\t\t Variable Value: " << string_ptr << endl;
    cout << "\t\t Memory reference location: " << &string_ptr << endl << endl;
}

void take_pointer_variable(int int_array_ptr[]) {
    cout << "\t --Data for pointer variable int_array_fiver--" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "\t\tValue at index " << i << " is " << int_array_ptr[i] << " with memory location at " << &int_array_ptr[i] << endl;
    }
}

template <size_t N>
void take_pointer_variable(std::array<int, N> &std_int_array) {
    cout << "\n\t --Data for pointer variable std_int_array--" << endl;
    for (int i = 0; i < std_int_array.size(); i++) {
        cout << "\t\tValue at index " << i << " is " << std_int_array[i] << " with memory location at " << &std_int_array[i] << endl;
    }
}


int main() {
    // variables
    int my_integer = 11;
    double my_double = 11.11;
    string ten_ten = "ten ten";
    int int_array_five[5]={0,1,2,3,4,};
    std::array<int, 5> std_int_array{{10,11,12,13,14}};

    cout << "Welcome to lab 8!" << endl << endl;

    take_simple_variable(my_integer);
    take_simple_variable(my_double);
    take_simple_variable(ten_ten);
    take_simple_variable(int_array_five);
    take_simple_variable<5>(std_int_array);

    cout << "\n\n";

    // reference variables
    int& my_int_ref{my_integer};
    double &my_dbl_ref{my_double};
    string & my_str_ref{ten_ten};
    int (&my_array_ref)[5] = int_array_five;
    std::array<int, 5>& std_array_ref = std_int_array;

    take_reference_variable(my_int_ref);
    take_reference_variable(my_dbl_ref);
    take_reference_variable(my_str_ref);
    take_reference_variable(my_array_ref);
    take_reference_variable<5>(std_array_ref);

    cout << "\n\n";

    // pointer variables
    int* my_int_ptr = &my_integer;
    double *my_dbl_ptr = &my_double;
    string * my_str_ptr = &ten_ten;
    int* my_array_ptr = int_array_five;
//    int* std_array_ptr = std_int_array.data(); // already a pointer no need to recast

    take_pointer_variable(*my_int_ptr);
    take_pointer_variable(*my_dbl_ptr);
    take_pointer_variable(*my_str_ptr);
    take_pointer_variable(my_array_ptr);
    take_pointer_variable<5>(std_int_array);

    cout << "\nThank you." << endl;

    return 0;
}
