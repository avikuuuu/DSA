#include <iostream>
using namespace std;
#include <bits/stdc++.h>  
void sort012(int *arr, int n) { //   Write your code here
int start = 0;
int end = n - 1;
int mid = 0;
while (mid <= end)
{
  if (arr[mid] == 0)
  {
    swap(arr[mid], arr[start]);
    mid++;
    start++;
  }
  else if (arr[mid] == 1)
  {
    mid++;
  }
  else
  {
    swap(arr[mid], arr[end]);
    end--;
  }
}
}