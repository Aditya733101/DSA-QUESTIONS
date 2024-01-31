#include<bits/stdc++.h>
using namespace std;
// second largest number
int secondLargest(int arr[],int size)
{
  sort(arr,arr+size);//sorting all the array element
  int secondLar = -1;
  for(int i=size-1;i>=1;i--)
  {
    if(arr[i]!=arr[i-1])
    {
      secondLar = arr[i-1];
      break;
    }
  }
  return secondLar;
}
//second smmalest number;-
int secondSmallest(int arr[],int size)
{
  sort(arr,arr+size);//sorting all the array element
  int secondSma = -1;
  for(int i=1;i<=size;i++)
  {
    if(arr[i]!=arr[0])
    {
      secondSma = arr[i];
      break;
    }
  }
  return secondSma;
}
int main()
{
  int size;
  cout<<"enter theh size "<<endl;
  cin>>size;
  int arr[size];
  for(int i=0;i<size;i++)
  {
    cin>>arr[i];
  }
 cout<<"second smalest number is "<<secondSmallest(arr,size)<<endl;
 cout<<"second largest number is "<<secondLargest(arr,size)<<endl;
}