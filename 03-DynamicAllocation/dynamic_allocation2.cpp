#include <iostream>
using namespace std;

int main() {
    // Part 1: Dynamic allocation of a single integer and then deallocation
    int *p = new int;  // Allocating memory for a single integer
    delete p;          // Deallocating the memory

    // Part 2: Dynamic allocation of another single integer and then deallocation
    p = new int;       // Allocating memory for another single integer
    delete p;          // Deallocating the memory

    // Part 3: Dynamic allocation of an array of 100 integers and then deallocation
    p = new int[100];   // Allocating memory for an array of 100 integers
    delete[] p;         // Deallocating the memory

    /*
    // The following code snippets are commented out because they contain infinite loops
    // Uncommenting them will result in the program getting stuck in an infinite loop.

    // Infinite loop trying to allocate a single integer in each iteration
    while (true) {
        int *p = new int;
    }

    // Infinite loop with a local variable (no dynamic memory involved)
    while (true) {
        int i = 10;
    }
    */

    return 0;
}
