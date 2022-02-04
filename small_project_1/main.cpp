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

    cout << "Choose an operation +, -, *, /, A: " << endl;
    cin >> opChoice;
    while (!(opChoice == "+" || opChoice == "-" || opChoice == "*" || opChoice == "/" || opChoice == "A")) {
        cout << "Choose an operation +, -, *, /: " << endl;
        cin >> opChoice;
    }

    if (opChoice == "A") {
        do {
            cout << "Enter number: " << endl;
            cin >> num1;
            sum += num1;
            cout << "Do you want to enter another number to average? [y/n]: " << endl;
            cin >> choice;
            count++;
        } while (choice == "y" || choice == "Y");
    }
    else {
        cout << "Enter the first number: " << endl;
        cin >> num1;
        cout << "Enter the second number: " << endl;
        cin >> num2;
    }

    if (opChoice == "A") {
        double avg = average(sum, count);
        cout << "The average of numbers entered is " << avg << endl;
    }
    else if (num2 == 0) {
        cout << "Cannot divide by zero!" << endl;
    }
    else if (!(typeid(num1) == typeid(int) || typeid(num2) == typeid(int))){
        cout << "An integer was not entered correctly! Please enter an integer." << endl;
    }
    else if (opChoice == "+") {
        sum = add(num1, num2);
        cout << num1 <<  " " << opChoice << " " << num2 <<  " = " << sum << endl;
    }
    else if (opChoice == "-") {
        sum = subtract(num1, num2);
        cout << num1 <<  " " << opChoice << " " << num2 <<  " = " << sum << endl;
    }
    else if (opChoice == "*") {
        sum = multiply(num1, num2);
        cout << num1 <<  " " << opChoice << " " << num2 <<  " = " << sum << endl;
    }
    else if (opChoice == "/") {
        sum = divide(num1, num2);
        cout << num1 <<  " " << opChoice << " " << num2 <<  " = " << sum << endl;
    }
    else {
        cout << "Invalid operation entered!" << endl;
    }
    return 0;
}