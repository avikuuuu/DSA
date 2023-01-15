// C++ Program to Count Number of Digits in a Number
#include <iostream>
#include<math.h>
using namespace std;

int main(){
   
 int n,i,digit,ans;

  cin>>n;
  i=0;
  ans=0;
 while (n !=0)
 {
  digit=n%10;

  if(digit == 1){
    ans = ans +(digit *pow(2,i));
  }
  i++;
  n=n/10;

 }
 cout<<"the binary is "<<ans<<endl;
 
 }