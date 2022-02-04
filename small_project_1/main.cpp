// Mark Bucaro
// CSCE 306 : Spring 2022
// Small_Project_1 - bucaro_mark_sp1.cpp
// Code Summary: This is a calculator that can do addition, subtraction, multiplication, division, and find the average.

#include <iostream>
using namespace std;

int add(int num1, int num2) {
    return num1 + num2;
}

int subtract(int num1, int num2) {
    return num1 - num2;
}

int multiply(int num1, int num2) {
    return num1 * num2;
}

int divide(int num1, int num2) {
    return num1 / num2;
}

double average(int sum, int count) {
    double avg = sum / count;
    return avg;
}


int main() {
    string opChoice;
    int num1;
    int num2;
    int sum;
    int count = 0;
    string choice;

    cout << "Welcome to small project 1!" << endl << endl;
    cout << "\t1: Addition" << endl;
    cout << "\t2: Subtraction" << endl;
    cout << "\t3: Multiplication" << endl;
    cout << "\t4: Division" << endl;
    cout << "\t5: Average" << endl;
    cout << "\tChoose an operation..." << endl;
    cin >> opChoice;

    while (!(opChoice == "1" || opChoice == "2" || opChoice == "3" || opChoice == "4" || opChoice == "5")) {
        cout << "\t1: Addition" << endl;
        cout << "\t2: Subtraction" << endl;
        cout << "\t3: Multiplication" << endl;
        cout << "\t4: Division" << endl;
        cout << "\t5: Average" << endl;
        cout << "\tChoose an operation..." << endl;
        cin >> opChoice;
    }

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
    else {
        cout << "\tEnter the first number: " << endl;
        cin >> num1;
        cout << "\tEnter the second number: " << endl;
        cin >> num2;
    }

    if (opChoice == "5") {
        double avg = average(sum, count);
        cout << "\tThe average of numbers entered is " << avg << endl << endl;
    }
    else if (num2 == 0) {
        cout << "\tCannot divide by zero!" << endl << endl;
    }
    else if (!(typeid(num1) == typeid(int) || typeid(num2) == typeid(int))){
        cout << "\tAn integer was not entered correctly! Please enter an integer." << endl << endl;
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
        cout << "\t" << num1 <<  " / " << num2 <<  " = " << sum << endl << endl;
    }
    else {
        cout << "\tInvalid operation entered!" << endl << endl;
    }

    cout << "Thank you." << endl;

    return 0;
}