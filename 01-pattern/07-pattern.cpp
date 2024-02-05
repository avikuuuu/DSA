#include<iostream>
using namespace std;

int main(){
    int n=6;

    int i=1;
    int j=1;

    while(i<=n){
        j=0;
        while (j<i)
        {
            cout<<i-j<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
}