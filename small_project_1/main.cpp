// Mark Bucaro
// CSCE 306 : Spring 2022
// Small Project 1 - bucaro_mark_sp1.cpp
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


int main() {
    std::string opChoice;
    int num1;
    int num2;
    int sum;

    cout << "Choose an operation +, -, *, /, A: " << endl;
    cin >> opChoice;
    while (!(opChoice == "+" || opChoice == "-" || opChoice == "*" || opChoice == "/" || opChoice == "^")) {
        cout << "Choose an operation +, -, *, /: " << endl;
        cin >> opChoice;
    }
    cout << "Enter the first number: " << endl;
    cin >> num1;
    cout << "Enter the second number: " << endl;
    cin >> num2;

    if (num2 == 0) {
        cout << "Cannot divide by zero!" << endl;
    }
    else if (!(typeid(num1) == typeid(int) || typeid(num2) == typeid(int))){
        cout << "An integer was not entered correctly! Please enter an integer." << endl;
    }
    else if (opChoice == "+") {
        sum = add(num1, num2);
        cout << to_string(num1) + " " + opChoice + " " + to_string(num2) + " = " + to_string(sum) << endl;
    }
    else if (opChoice == "-") {
        sum = subtract(num1, num2);
        cout << to_string(num1) + " " + opChoice + " " + to_string(num2) + " = " + to_string(sum) << endl;
    }
    else if (opChoice == "*") {
        sum = multiply(num1, num2);
        cout << to_string(num1) + " " + opChoice + " " + to_string(num2) + " = " + to_string(sum) << endl;
    }
    else if (opChoice == "/") {
        sum = divide(num1, num2);
        cout << to_string(num1) + " " + opChoice + " " + to_string(num2) + " = " + to_string(sum) << endl;
    }
    else {
        cout << "Invalid operation entered!" << endl;
    }
    return 0;
}