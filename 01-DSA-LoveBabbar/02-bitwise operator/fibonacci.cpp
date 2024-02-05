#include<iostream>
using namespace std;

int main(){
    int n,a,b,z;
    a=0;
    b=1;
    cin>>n;
    cout<<a<<" "<<b<<" ";

    for (int i=1;i<=n;i++){
            z=a+b;
            cout<<z<<" ";
            a=b;
            b=z;
    }

}
    

