#include<iostream>
using namespace std;


    void printArray(int arr[], int length){
     for(int i=0;i<length;i++){
         cout<<arr[i]<<" ";
     }
     cout<<endl;

 }

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    printArray(a,n);

    for(int i=0;i<n;i=i+2){

        if(i+1<n){
            swap(a[i],a[i+1]);
        } 

    }
    
    printArray(a,n);


    cout<<endl;
    return 0;
}