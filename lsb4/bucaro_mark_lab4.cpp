// Mark Bucaro
// CSCE 306 : Spring 2022
// Lab4 - bucaro_mark_lab4.cpp
// Code Summary: This source code file demonstrates For Loop, While Loop and Counters in a single page CPP application.

#include <iostream>
using namespace std;

void print_array(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << "\t\tArray_data[" << i << "] value is " << arr[i] << endl;
    }
}

double return_average(int arr[], int size) {
    double average;
    int sum = 0;
    int counter = 0;

    do {
        sum += arr[counter];
        counter++;
    } while (counter < size);

    average = sum/size;
    return average;
}

void reverse_and_print(int arr[], int size) {
    int index = 0;
    int newarray[size];

    for (int i = size - 1; i >= 0; i--) {
        newarray[index] = arr[i];
        index++;
    }
    print_array(newarray, size);
}

int main() {
    int limit = 11;
    int counter = 0;
    int array[limit];

    cout << "Hello, Welcome to Lab 4!\n" << endl;
    cout << "\tThis prints the data from the array using a for loop."<< endl;

    while (counter != limit) {
        array[counter] = counter;
        counter++;
    }

    print_array(array, limit);

    double average;
    average = return_average(array, limit);
    cout << "\n\tNow computing the average of the sum of array integers..." << endl;
    printf("\t\tThe average of the items in array_data is %.2f", average);

    cout << "\n\n\tThis prints the data from the array using a for loop."<< endl;
    reverse_and_print(array, limit);

    cout << "\nThank you." << endl;

    return 0;
}
