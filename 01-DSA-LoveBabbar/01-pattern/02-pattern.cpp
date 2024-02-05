#include<iostream>
using namespace std;

int main(){
    int n,i,j;

    cin>>n;

    i=0;


    while(i<n){
        j=0;
        while(j<n){
            cout<<"*";
            j++;
        }
        cout<<endl;
        i++;
    }

}