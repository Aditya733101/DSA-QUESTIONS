// Given an array of integers arr[] of length N, every element appears thrice except for one which occurs once.
// Find that element which occurs once.

// Example 1:

// Input:
// N = 4
// arr[] = {1, 10, 1, 1}
// Output: 10
// Explanation:
// 10 occurs once in the array while the other
// element 1 occurs thrice.
#include<bits/stdc++.h>
using namespace std;
int findtheFirstDup(int arr[],int size)
{
  unordered_map<int,int>element;
  for(int i=0;i<size;i++)
  {
    element[arr[i]]++;
  }
  for(auto i: element)
  {
    if(i.second ==1)
    {
      return i.first;
    }
  }
  return -1;
}
int main()
{
  int arr[] = {2, 2, 3, 2};
  int size = sizeof(arr)/sizeof(arr[0]);
  cout<<findtheFirstDup(arr,size)<<" <- occurs once in the array while the other"<<endl;
}