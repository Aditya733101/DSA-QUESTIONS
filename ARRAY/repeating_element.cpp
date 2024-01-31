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
  //10, 30, 40, 20, 10, 20, 40, 10
  // 10, 30, 40, 20, 10, 20, 50, 10
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