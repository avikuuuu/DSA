#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n,ans=0,i=0;
    cin>> n;

    while (n)
    {
        int Lastdigit=n&1;
       
        // ans=(ans*10)+Lastdigit; give reverse
        ans=(Lastdigit*pow(10,i)+ans);
         n=n>>1;
         i++;

    }

    cout<<ans;
    
}