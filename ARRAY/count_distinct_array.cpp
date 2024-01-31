//count distinct number or unique number int cpp
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  unordered_map<int, int>mp;
  for(int i=0;i<n;i++)
  {
    mp[arr[i]]++;//unorder_map cannot store same keys 

  }
  cout<<mp.size()<<endl;

}