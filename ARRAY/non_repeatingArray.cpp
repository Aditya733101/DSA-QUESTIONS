#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cout<<"enter the size "<<endl;
  cin>>n;
  int arr[n];
  //10, 30, 40, 20, 10, 20, 50, 10
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  unordered_map<int,int>mp;
  for(int i=0;i<n;i++)
  {
    mp[arr[i]]++;
  }
  for(int i=0;i<n;i++)
  {
    if(mp[arr[i]]==1)
    {
      cout<<arr[i]<<" ";
    }
  }
}