#include<iostream>
using namespace std;

int main(){
    int n=6;

    int i=0;
    int j=0;

    while(i<n){
        j=0;
        while (j<n)
        {
            cout<<n-j<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
}