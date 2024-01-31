#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cout<<"enter the size of array "<<endl;
  cin>>n;
  int arr[n];
  vector<int>ans;
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  unordered_map<int,int>freq;
  for(int i=0;i<n;i++)
  {
    freq[arr[i]]++;
  if(freq[arr[i]]==2)
  {
    ans.push_back(arr[i]);
  }
    
  }
  for(int ch : ans)
  {
    cout<<ch<<" ";
  }
  cout<<endl;
}