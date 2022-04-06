#include <iostream>
# include <string>
using namespace std;

class Course {
public:
    string instructor;
    int courseNumber;

    Course() {
        instructor = "nobody";
        courseNumber = 0;

        cout << "in default constructor" << endl;
    }

    Course(string i, int c) {
        instructor = i;
        courseNumber = c;

        cout << "in 2-argument constructor" << endl;
    }
};


int main() {

    int* z[] = {new int(1), new int(2), new int(3)};

    delete z[0];
    delete z[1];
    delete z[2];

    delete[] z;

    return 0;
}
