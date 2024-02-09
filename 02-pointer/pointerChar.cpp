
#include<iostream>
using namespace std;

int main()
{
    // char str[] = "abcde";   // Uncommented to avoid conflicting declarations
    // char *pstr = "abcde";   // Uncommented to avoid conflicting declarations
    
    int a[] = {1, 2, 3};
    char b[] = "abc";
    
    cout << a << endl;       // Output: Address of the first element of array 'a'
    cout << b << endl;       // Output: The string "abc" (prints the content of the character array)

    char *c = &b[0];
    cout << c << endl;       // Output: Address of the first character of array 'b' (prints the content as a string)

    char c1 = 'a';
    char *pc = &c1;
    cout << c1 << endl;      // Output: The character 'a'
    cout << pc << endl;      // Output: Address of the character 'a' (prints the content as a string starting from 'a')

    return 0;
}
