#include<iostream>
#include<vector>
using namespace std;

int main(){

   vector<int> v;

   vector<int> c(10,1);
   vector<int> lc(c);
   cout<<"capacity cccc-->"<<c.capacity()<<endl;
   for(int t:lc){
    cout<<t<<" ";
   }
   cout<<endl;

   cout<<"capacity-->"<<v.capacity()<<endl;

   v.push_back(1);
   cout<<"capacity-->"<<v.capacity()<<endl;
     v.push_back(2);
   cout<<"capacity-->"<<v.capacity()<<endl;
     v.push_back(3);
   cout<<"capacity-->"<<v.capacity()<<endl;
   
   cout<<"size-->"<<v.size()<<endl;
   cout<<"elements-->"<<v.at(1)<<endl;

   for(int t:v){
    cout<<t<<" ";
   }
   cout<<endl;

   cout<<"front-->"<<v.front()<<endl;
   cout<<"back-->"<<v.back()<<endl;

    v.pop_back();
   for(int t:v){
    cout<<t<<" ";
   }
   cout<<endl;

   v.clear();

   cout<<"size-->"<<v.size()<<endl;











}