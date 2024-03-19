#include <iostream>
using namespace std;

void g(int const & a) {
    // Attempting to modify the value of 'a', which is a constant reference
    // This will result in a compilation error
    a++;
}

void f(const int * p) {
    // 'p' is a pointer to a constant integer
    // It can point to any integer, but the integer it points to cannot be modified through 'p'
}

int main() {
    int const i = 10;

    // 'p' is a pointer to a constant integer 'i'
    int const * p = &i;

    int j = 12;
    int* p3 = &j;

    // Call to 'f' with a pointer to a non-constant integer
    // This is allowed, but the function won't be able to enforce const-correctness
    f(p3);

    // Call to 'g' with a non-constant integer 'j'
    // This will result in a compilation error since 'g' expects a constant reference
    g(j);

    // 'p2' is a pointer to a constant integer 'j'
    int const * p2 = &j;
    cout << *p2 << endl;  // Outputs the value pointed to by 'p2' (12)

    j++;
    cout << *p2 << endl;  // Outputs the value pointed to by 'p2' again (still 12)

    return 0;
}
