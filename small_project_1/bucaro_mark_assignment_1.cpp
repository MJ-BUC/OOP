// Mark Bucaro
// CSCE 306 : Spring 2022
// Small_Project_1 - bucaro_mark_sp1.cpp
// Code Summary: This is a calculator that can do addition, subtraction, multiplication, division, and find the average.

#include <iostream>
#include <iomanip>
using namespace std;

// int returning function that adds two numbers
int add(int num1, int num2) {
    return num1 + num2;
}

// int returning function that subtracts two numbers
int subtract(int num1, int num2) {
    return num1 - num2;
}

// int returning function that multiplies two numbers
int multiply(int num1, int num2) {
    return num1 * num2;
}

// int returning function that divides two numbers
double divide(double num1, double num2) {
    return num1 / num2;
}

// double returning function that takes the average of input numbers
double average(double sum, int count) {
    double avg = sum / count;
    return avg;
}

// all numbers entered for num1 and num2 need to be int does not take floating point or strings


int main() {
    string opChoice;
    int num1;
    int num2;
    double sum;
    int count = 0;
    string choice;

    // Operations to choose from
    cout << "Welcome to small project 1!" << endl << endl;
    cout << "\t1: Addition" << endl;
    cout << "\t2: Subtraction" << endl;
    cout << "\t3: Multiplication" << endl;
    cout << "\t4: Division" << endl;
    cout << "\t5: Average" << endl;
    cout << "\tChoose an operation..." << endl;
    cin >> opChoice;

    // enter your choice for the operation if what you entered is not available, it will prompt to enter again
    while (!(opChoice == "1" || opChoice == "2" || opChoice == "3" || opChoice == "4" || opChoice == "5")) {
        cout << "\t1: Addition" << endl;
        cout << "\t2: Subtraction" << endl;
        cout << "\t3: Multiplication" << endl;
        cout << "\t4: Division" << endl;
        cout << "\t5: Average" << endl;
        cout << "\tChoose an operation..." << endl;
        cin >> opChoice;
    }

    // if choice entered is 5 you can enter more than 2 numbers that will all be summed
    if (opChoice == "5") {
        do {
            cout << "\tEnter number: " << endl;
            cin >> num1;
            sum += num1;
            cout << "\tDo you want to enter another number to average? [y/n]: " << endl;
            cin >> choice;
            count++;
        } while (choice == "y" || choice == "Y");
    }
    //  if the choice entered is not 5 the else is triggered
    else {
        cout << "\tEnter the first number: " << endl;
        cin >> num1;
        cout << "\tEnter the second number: " << endl;
        cin >> num2;
    }

    // if and if else that calls the corresponding function based on te option choice entered
    if (opChoice == "5") {
        double avg = average(sum, count);
        cout << "\tThe average of numbers entered is " <<setprecision(2) << avg << endl << endl;
    }
    // error handling for someone who divides by zero
    else if (num2 == 0 && opChoice == "4") {
        cout << "\tCannot divide by zero!" << endl << endl;
    }
    else if (opChoice == "1") {
        sum = add(num1, num2);
        cout << "\t" << num1 <<  " + " << num2 <<  " = " << sum << endl << endl;
    }
    else if (opChoice == "2") {
        sum = subtract(num1, num2);
        cout << "\t" << num1 <<  " - " << num2 <<  " = " << sum << endl << endl;
    }
    else if (opChoice == "3") {
        sum = multiply(num1, num2);
        cout << "\t" << num1 <<  " * " << num2 <<  " = " << sum << endl << endl;
    }
    else if (opChoice == "4") {
        sum = divide(num1, num2);
        cout << "\t" << num1 <<  " / " << num2 <<  " = " << setprecision(4) << sum << endl << endl;
    }
    // error handling when an incorrect operation is selected
    else {
        cout << "\tInvalid operation entered!" << endl << endl;
    }

    cout << "Thank you." << endl;

    return 0;
}