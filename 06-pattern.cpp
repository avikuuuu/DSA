#include <iostream>
using namespace std;

int main()
{
    int n = 6, i;
    i = 1;
    int j=1;
 
    while (i <= n)
    {
        // j=1;
       while (j<=i)
       {
        cout<<i<<" ";
        j++;
       }
       cout<<endl;
       i++;
       
    }

    return 0;  
}
