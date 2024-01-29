#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n=12345,ans=0,i=0;
   

    while (n)
    {
        int Lastdigit=n%10;
        ans=(ans*10)+Lastdigit;
        // ans=(Lastdigit*pow(10,i))+ans;
        n /=10;
        i++;
    }

    cout<<ans;
    
}