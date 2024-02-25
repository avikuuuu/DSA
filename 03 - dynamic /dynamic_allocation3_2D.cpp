#include <iostream>
using namespace std;

int main() {
    int m, n;
    cin >> m >> n;

    // Part 1: Dynamic allocation of a 2D array of integers
    int **p = new int *[m];
    for (int i = 0; i < m; i++) {
        p[i] = new int[i + 1];
        for (int j = 0; j < n; j++) {
            cin >> p[i][j];
        }
    }

    // Part 2: Deallocating the dynamically allocated memory
    for (int i = 0; i < m; i++) {
        delete[] p[i]; // Deallocate memory for each row
    }
    delete[] p; // Deallocate memory for the array of pointers

    return 0;
}
