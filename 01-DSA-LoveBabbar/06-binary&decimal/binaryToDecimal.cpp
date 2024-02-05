// #include <iostream>
// #include <math.h>
// using namespace std;

// int main()
// {
//     int n, ans = 0, i = 0;
//     cin >> n;

//     while (n)
//     {
//         int Lastdigit = n & 1;

//         if (Lastdigit == 1)
//         {
//             ans += pow(2,i);
//         }

//         n =n>>1;
//         i++;
//     }

//     cout << ans;
// }

#include<iostream>
#include<math.h>
using namespace std;


int main() {

    int n;
    cin >> n;

    int i = 0, ans = 0 ;

    while( n != 0) {

        int digit = n % 10;

        if( digit == 1) {
            ans = ans + pow(2, i);
        }

        n = n/10;
        i++;

    }
    cout<< ans << endl;
    return 0;
}