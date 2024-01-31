#include<bits/stdc++.h>
using namespace std;
int removeDuplicate(int arr[],int n)
{
  int rd=0;
  for(int i=1;i<n;i++)
  {
    if(arr[rd]!=arr[i])
    {
      rd++;
      arr[rd]=arr[i];
    }
  }
  return rd+1;
}
int main()
{
  int n;
  cout<<"enter the size ";
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  int result = removeDuplicate(arr,n);
  for(int i=0;i<result;i++)
  {
    cout<<arr[i]<<" ";
  }
}
