#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
int main()
{
  int arr[]={12,3,4,5,6,7,8,3,12,5,6,4};
  int size = sizeof(arr)/sizeof(arr[0]);
  unordered_map<int,int>freq;
  for(int i=0;i<size;i++)
  {
    freq[arr[i]]++;
  }
  for(auto p : freq)
  {
    cout<< p.first <<"occur "<<p.second<<endl;
  }
}
// C++ program to find the frequency of elements in an array
