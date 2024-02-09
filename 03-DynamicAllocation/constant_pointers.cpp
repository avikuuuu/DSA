#include <iostream>
using namespace std;

int main() {
    int i = 10;
    int j = 21;

    // Pointer to a constant integer
    int const *p = &i;
    p = &j;  // Valid: can change the pointer to point to another integer
    // (*p)++; // Invalid: attempting to modify the value through a pointer to a constant integer

    // Constant pointer to a non-constant integer
    int *const p2 = &i;
    (*p2)++; // Valid: can modify the value through a constant pointer to a non-constant integer
    // p2 = &j; // Invalid: attempting to change the constant pointer to point to another integer

    // Constant pointer to a constant integer
    int const *const p3 = &i;
    // p3 = &j;    // Invalid: attempting to change the constant pointer to point to another integer
    // (*p3)++;    // Invalid: attempting to modify the value through a constant pointer to a constant integer

    return 0;
}
