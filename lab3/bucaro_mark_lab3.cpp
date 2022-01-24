// Mark Bucaro
// CSCE 306 : Spring 2022
// Lab3 - bucaro_mark_lab3.cpp
// Code Summary: This source code file demonstrates prompts and conditionals in a single page CPP application.

#include <iostream>
#include <string>
using namespace std;

int high_low (int first_num = 10, int second_num = 10) {
    int lowest;

    if (first_num == second_num) {
        lowest = first_num;
    }
    else if (first_num < second_num) {
        lowest = first_num;
    }
    else {
        lowest = second_num;
    }

    return lowest;
}

void compare_strings(string first, string last);

int string_length(string user_given);

void compare_strings(string first, string last) {
    int first_len = string_length(first);
    int last_len = string_length(last);

    int lowest_num = high_low(first_len, last_len);

    int lowest;

    if (first_len == last_len) {
        cout << "\n\t\t The names are the same length, " << endl;
    }
    else if (first_len == lowest_num) {
        cout << "\t\t The shortest name is " << first << " at " << first_len << " characters long." << endl;
        cout << "\t\t The longest name is " << last << " at " << last_len << " characters long." << endl;
    }
    else {
        cout << "\t\t The shortest name is " << last << " at " << last_len << " characters long." << endl;
        cout << "\t\t The longest name is " << first << " at " << first_len << " characters long." << endl;
    }

    return void();
}

int string_length(string user_given) {
    int string_length;
    string_length = user_given.length();
    return string_length;
}

int main() {
    string firstname, lastname;

    cout << "Hello, Welcome to Lab 3!\n" << endl;

    int high_low_is = high_low();
    cout << "\tCalling high_low() default results in: " << high_low_is << endl;

    int high_low_new = high_low(50, 8);
    cout << "\tCalling high_low(50,8) with new values is: " << high_low_new << endl << endl;

    cout << "\tTesting string_length function: " << endl;
    cout << "\t\tPlease enter your first and last name seperated by a space: ";
    cin >> firstname >> lastname;

    int f_length_is = string_length(firstname);
    int l_length_is = string_length(lastname);

    cout << "\n\t\tThe length of the first name given is: " << f_length_is << endl;
    cout << "\t\tThe length of the last name given is: " << l_length_is << endl << endl;

    cout << "\tCalling string compare with name data: " << endl;
    compare_strings(firstname, lastname);

    cout << "\nThank you." << endl;

    return 0;
}
