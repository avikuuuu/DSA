#include<iostream>
using namespace std;

int main() 
{
    int a[10];
    cout << a << endl;         // Output: Address of the first element of array 'a'
    cout << &a[0] << endl;     // Output: Address of the first element of array 'a'
    
    a[0] = 5;
    cout << *a << endl;        // Output: Value at the first element of array 'a' (5)
    cout << *(a + 1) << endl;   // Output: Value at the second element of array 'a' (garbage value, uninitialized)

    int *p = &a[0];
    cout << a << endl;          // Output: Address of the first element of array 'a'
    cout << p << endl;          // Output: Address of the first element of array 'a'

    cout << &p << endl;         // Output: Address of the pointer 'p'
    cout << &a << endl;         // Output: Address of the array 'a'

    cout << sizeof(p) << endl;  // Output: Size of the pointer 'p' in bytes
    cout << sizeof(a) << endl;  // Output: Size of the array 'a' in bytes

    p = p + 1;                  // Incrementing the pointer 'p' (moves to the next element of array 'a')
    // a = a + 1;               // This operation is not allowed for arrays

    return 0;
}
