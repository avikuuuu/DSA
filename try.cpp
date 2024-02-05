#include <iostream>
#include <cmath> // Include the cmath header for pow function

int main() {
    int ans = 0, i = 0, j = 0, show = 0;
    int n = 10;

    // Convert decimal to binary
    while (n) {
        int digit = n % 2;
        ans = ans + digit * pow(10, i);
        n = n / 2;
        i++;
    }
    std::cout << ans << " before reversing" << std::endl;

    // Reverse the binary by swapping 0s and 1s
    int rev = 0;
    while (ans) {
        int mod = ans % 10;
        if (mod == 1) {
            rev = rev * 10 + 0;
        } else if (mod == 0) {
            rev = rev * 10 + 1;
        }
        ans /= 10;
    }
    std::cout << rev << " after reversing" << std::endl;

    // Convert binary back to decimal
    while (rev) {
        int mod = rev % 10;
        if (mod == 1) {
            show = show + pow(2, j);
        }
        rev = rev / 10;
        j++;
    }

    // Add a line to print the result
    std::cout << show << " after converting back to decimal" << std::endl;

    return 0;
}
