#include <iostream>
using namespace std;

int main()
{
    int n = 6, i, j;
    i = 1;
 
    while (i <= n*n)
    {
        cout<<i<<" ";
        i++;

        if(i%n==1){
            // cout<<i<<" by "<<n<<endl;
            cout<<endl;
        }
           
    }

    return 0;  
}
