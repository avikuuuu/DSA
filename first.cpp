#include<iostream>
using namespace std;

int main(){

   int n,i,j;

   cin>>n;
   i=1;
   
   while(i<=n){
      j=1;
      char ch='a';
      while(j<=n){
         char vb=ch+i+j-2;
         cout<<vb<<" ";
         j++;
      }
      cout<<endl;
      i++;  
   }


}