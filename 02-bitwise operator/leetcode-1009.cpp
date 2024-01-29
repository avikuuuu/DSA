#include <iostream>
#include <cmath> // Include the cmath header for pow function

int main() {
    int ans = 0, i = 0,j=0, show = 0;
    int n = 5;

    // Convert binary to decimal
    while (n) {
        int digit = n & 1;
        // int rev = ~digit;
        ans = (digit * pow(10, i)) + ans;
        n = n >> 1;
        i++;
    }
    std::cout << ans << " before decimal" << std::endl;

    int rev=0;

    while(ans){
        int mod=ans%10;
        if(mod==1){
            rev=(rev*10)+0;
        } else if(mod==0){
            rev=(rev*10)+1;
        }
        ans/=10;
    }
    std::cout << rev << " before decimal" << std::endl;
    // Convert decimal back to binary
    while (rev) {
        int mod = rev % 10;
        if (mod == 1) {
            show = rev+ pow(2, j);
        }
        rev = rev/10;
        j++;
    }

    // Add a line to print the result
    std::cout << show << " after converting back to binary" << std::endl;

    return 0;
}
