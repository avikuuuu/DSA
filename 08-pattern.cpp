#include<iostream>
using namespace std;

int main(){
    int n=6;

    int i=0;
    int j=0;
    char A='A';

    while(i<n){
        j=0;
        while (j<n)
        {
            char re=A+i;
            cout<<re<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
}