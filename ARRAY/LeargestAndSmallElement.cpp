// Largest Element in an array using C++

#include<bits/stdc++.h>
using namespace std;
int LearGesr(int arr[],int size)
{
  int min = INT_MIN;
  for(int i=0;i<size;i++)
  {
    if(min<arr[i])
    {
      min = arr[i];
    }
  }
  return min;
}
int SmaNum(int arr[],int size)
{
  int max = INT_MAX;
  for(int i=0;i<size;i++)
  {
    if(max>arr[i])
    {
      max=arr[i];
    }
  }
  return max;
}
int main()
{
  int arr[] = {1,4,2,15,7,6,0};
  int size =sizeof(arr)/sizeof(arr[0]);
  cout<<"leargest number is -- "<<LearGesr(arr,size)<<endl;
  cout<<"smallest number is-- "<<SmaNum(arr,size)<<endl;
  
}