#include <iostream>
using namespace std;

int a; // Global variable

void g() {
    a++;
    cout << a << endl;
}

void f() {
    cout << a << endl;
    a++;
    g();
}

int main() {
    a = 10;
    f(); // Calls function f()
    f(); // Calls function f() again
    cout << a << endl; // Outputs the value of global variable a

    return 0;
}
