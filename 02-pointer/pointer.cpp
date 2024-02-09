#include<iostream>
using namespace std;

int main(){
    int a=10;
    int *p = &a;
    int *z = p;  // z also points to 'a'

    int s = *z;   // s is assigned the value pointed to by 'z' (which is 'a')
    cout << a << endl;  // Output: 10
    cout << s << endl;  // Output: 10
    cout << *z << endl; // Output: 10 (dereferencing 'z' gives the value pointed to, which is 'a')
    cout << *p << endl; // Output: 10 (dereferencing 'p' gives the value pointed to, which is 'a')

    ++(*p);  // Increment the value pointed to by 'p', which is 'a'

    cout << a << endl;  // Output: 11 (the original variable 'a' is modified)
    cout << s << endl;  // Output: 10 (s remains the same as it was assigned the value of 'a' before the increment)
    cout << *z << endl; // Output: 11 (dereferencing 'z' now gives the updated value of 'a')
    cout << *p << endl; // Output: 11 (dereferencing 'p' gives the updated value of 'a')
}
