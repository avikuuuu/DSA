
#include<iostream>
using namespace std;

int main()
{
    int i = 10;
    int *p = &i;

    cout << p << endl;  // Output: Address of 'i'
    
    // Increment the pointer by 2 (assuming int size is 4 bytes)
    p = p + 2;
    cout << p << endl;  // Output: Address after incrementing by 2 * sizeof(int) bytes
    
    // Decrement the pointer by 2 (assuming int size is 4 bytes)
    p = p - 2;
    cout << p << endl;  // Output: Address after decrementing by 2 * sizeof(int) bytes

    double d = 102.3;
    double *dp = &d;

    cout << dp << endl;  // Output: Address of 'd'

    // Increment the pointer by 1 (assuming double size is 8 bytes)
    dp++;
    cout << dp << endl;  // Output: Address after incrementing by sizeof(double) bytes

    return 0;
}
