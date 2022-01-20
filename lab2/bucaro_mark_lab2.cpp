// Mark Bucaro
// CSCE 306 : Spring 2022
// Lab2 - bucaro_mark_lab2.cpp

#include <iostream>
using namespace std;

// Code Summary: This source code file demonstrates variables declaration, different data types and formatted printing in a single page CPP application.
int num = 1;
double decimal = 1.1;
char character = 'a';
bool boolean = true;


int main() {
    cout << "The eight basic iostream functions are: "<< endl;
    cout << "\tcin, cout, cerr, clog, wcin, wcout, wcerr, wclog"<< endl;
    cout << "\tLibrary Reference: https://docs.microsoft.com/en-us/cpp/standard-library/iostream?view=msvc-170\n"<< endl;

    cout << "The include string needed for the standard library file system utility is: "<< endl;
    cout << "\t#include <filesystem>\n"<< endl;

    cout << "The newLine escape sequence (\\n) acts like endl"<< endl;
    cout << "\tThe tab escape sequence (\\t) indents text"<< endl;
    cout << "\t\tMultiple tab sequences (\\t\\t) can be used together\n"<< endl;

    cout << "\tThe integer variable is " + to_string(num)<< endl;
    cout << "\tThe double one_one is " + to_string(decimal)<< endl;
    cout << "\tThe char a is " + to_string(character)<< endl;
    cout << "\tThe boolean tf is " + to_string(boolean) + "\n"<< endl;

    cout << "Please update the value of the variable 'one' to 2: "<< endl;
    cin >> num;
    cout << "\tThe updated value of one is: " + to_string(num) + "\n"<< endl;

    cout << "Please update the value of the variable 'a' to b: "<< endl;
    cin >> character;
    cout << "\tThe updated value of a is: " + to_string(character) + "\n"<< endl;

    return 0;
}
