# include <vector>
# include <iostream>
using namespace std;

void foo(int*** r, int len) {
    for (int i = 0; i < len; i++)
        *(r[i]) = *(r[len-1]);
}


int main() {
    int* a = new int(1);
    int* b = new int(2);
    int* c = new int(3);
    int** d[] = {&a, &b, &c};

    foo(d, 3);

    for (int i = 0; i < 3; i++)
        cout << **(d[i]) << endl;

    return 0;
}
