#include<iostream>
using namespace std;

int main(){
    int i;  // uninitialized variable, contains garbage value
    cout << i << endl;  // Accessing uninitialized variable, results in garbage value

    i++;  // Incrementing uninitialized variable, undefined behavior

    int* p = 0;  // Null pointer
    cout << p << endl;  // Outputs the address (which is 0, a null pointer)

    // Dereferencing a null pointer, undefined behavior
    cout << *p << endl;  // Dereferencing null pointer, undefined behavior

    (*p)++;  // Attempting to modify the value at address 0, undefined behavior
    cout << *p << endl;  // Dereferencing null pointer, undefined behavior

    return 0;
}
