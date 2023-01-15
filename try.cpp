#include<iostream>
#include<conio.h>
#include<time.h>
#include<dos.h>
#include<stdlib.h>

int a[1000],p,q,r,n,ch=1,a1;

void quickSort(int[],int,int);
void allocate(int,int);
int partition(int[],int,int);

void main()
{
  clrscr();
  randomize();
  do{
    cout<<"\nEnter Size of array : ";
    cin>>n;
    cout<<"\n1. Average Case\n2. Worst Case\nEnter Your Choice-->";
    cin>>a1;
    switch(a1)
    {
      case 1: cout<<"\nAVERAGE CASE\n";
      allocate(n,a1);
      p=0;
      r=n-1;
      clock_t start,end;
      start=clock();
      quickSort(a,p,r);
      end=clock();
      cout<<"\nThe time is : "<<(end-start)/CLK_TCK;
      cout<<"\nSorted Array is : \n";
      for(int i=0;i<n;i++)
      cout<<a[i]<<" ";
      break;

      case 2: cout<<"\nWORST CASE\n";
      allocate(n,a1);
      p=0;
      r=n-1;
      start=clock();
      quickSort(a,p,r);
      end=clock();
      cout<<"\nThe time is : "<<(end-start)/CLK_TCK;
      break;
     }

       cout << "AVDESH KUMAR \n";
        cout << "IT - 3 \n";
        cout << "00176807721 \n";
      cout<<"Press '1' to calculate other running time --> ";
      cin>>ch;
    }while(ch==1);
    getch();
}

void allocate(int n,int a1)
{
  if(a1==1)
  {
    for(int i=0;i<n;i++)
    {
      a[i]=random(n);
    }
   }
   if(a1==2)
   {
     for(int i=0;i<n;i++)
     {
       a[i]=i;
     }
   }
}

void quickSort(int a[],int p,int r)
{
  if(p<r)
  {
    delay(1.2);
    int q = partition(a,p,r);
    quickSort(a,p,q);
    quickSort(a,q+1,r);
  }
}

int partition(int a[],int p,int r)
{
   int x = a[p];
   int i = p-1;
   int j = r+1;
   while(1)
   {
     do
     {
       j = j-1;
     }while(a[j]>x);
     do
     {
       i =i+1;
     }while(a[i]<x);
     if(i<j)
     {
       int temp=a[i];
       a[i]=a[j];
       a[j]=temp;
     }
     else
     {
       return j;
     }
   }
}