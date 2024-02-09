#include <iostream>
using namespace std;

int main() {
    // Part 1: Casting int to char
    int i = 65;
    char c = i;  //implicit type cast
    cout << c << endl; // Outputs 'A'

    // Part 2: Casting int pointer to char pointer
    int *p = &i; //have address of i
    char *pc = (char*)p; //expecit type cast

    cout << p << endl;  // Outputs the address of i
    cout << pc << endl; // Outputs the value pointed to by pc interpreted as "a" string

    // Part 3: Dereferencing int and char pointers
    cout << *p << endl;     // Outputs the value of i (65)
    cout << *pc << endl;    // Outputs 'A' (the character representation of the first byte of i)
    cout << *(pc + 1) << endl; // Outputs the next byte in memory (assuming little-endian, might not be meaningful)
    cout << *(pc + 2) << endl; // Outputs the byte after that
    cout << *(pc + 3) << endl; // Outputs the byte after that

    return 0;
}
