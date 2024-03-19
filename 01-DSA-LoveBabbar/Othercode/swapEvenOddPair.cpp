 #include<bits/stdc++.h>
 using namespace std;


int swapp(int arr[],int size){

    int start=0;
    int end=size-1;

  for(int i=0;i<size;i=i+2){

    if(i+1<size){

    swap(arr[i],arr[i+1]);
    }
  }

}

void printFN(int arr[],int size){

    for( int i=0;i<size;i++){

        cout<<arr[i]<<" ";
    }


}


int main(){

    int arr[10]={2,4,7,12,45,67,34,-23,98};
    swapp(arr,9);
    printFN(arr,9);
}