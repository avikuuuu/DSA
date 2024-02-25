#include <iostream>
using namespace std;

int main() {
    // Part 1: Dynamic allocation of an integer
    int *p = new int;
    *p = 10;
    cout << *p << endl;  // Outputs the value pointed to by p (10)

    // Part 2: Dynamic allocation of a double and a char
    double *pd = new double;
    char *c = new char;

    // Part 3: Dynamic allocation of an array of integers with a fixed size (50)
    int *pa = new int[50];

    // Part 4: Dynamic allocation of an array of integers with a size determined by user input
    int n;
    cout << "Enter num of elements" << endl;
    cin >> n;

    int *pa2 = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> pa2[i];
    }

    // Part 5: Finding the maximum value in the dynamically allocated array
    int max = -1;
    for (int i = 0; i < n; i++) {
        if (max < pa2[i]) {
            max = pa2[i];
        }
    }
    cout << "Maximum value: " << max << endl;

    // Part 6: Deallocating the dynamically allocated memory
    delete p;
    delete pd;
    delete c;
    delete[] pa;
    delete[] pa2;

    return 0;
}
