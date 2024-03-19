// C++ Program to Count Number of Digits in a Number
#include <iostream>
#include<math.h>
using namespace std;

int main(){
   
   int num,bit,ans,i;

   cin>>num;
   ans=0;
    i=0;
  while(num !=0){
   bit=num&1;

  ans=(bit * pow(10,i)) +ans;

  num=num>>1;
  i++;
  }
  cout<<"answer is "<<ans<<endl;
}