#include <iostream>
using namespace std;

void sum(int* p,int q){
    cout<<*p<<q;

}

int main() {

    int p=23;
    int q=43;
    sum(&p,q);
}