#include <iostream>
using namespace std;

int main()
{
    int x, isprime;
    cin >> x;
    int i = 2;

    while (i < x)
    {
        isprime = x % i;

        if (isprime == 0)
        {
            break;
        }
        else
        {
            i++;
        }
    }

    if (isprime != 0)
    {
        cout << x << " is prime number";
    }
    else
    {
        cout << x << " is not prime number";
    }
}