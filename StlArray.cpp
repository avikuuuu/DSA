#include<iostream>
#include<array>
using namespace std;

int main(){

    int arr[5]={0,1,2,3,4};

    array<int,5> arr2={5,6,7,8,9};

    cout<<sizeof(arr)/sizeof(arr[0])<<" "<<arr2.size()<<endl;

    cout<<arr2.at(2)<<" "<<arr[2]<<endl;

    cout<<arr2.front()<<" "<<arr2.back()<<endl;

    cout<<arr2.empty()<<endl;



}