// Count Duplicates:

// Problem: Given an array, count the number of duplicate elements.
// Example: Input: [1, 2, 2, 3, 3, 3], Output: 2.
#include<bits/stdc++.h>
using namespace std;
void duplicate(vector<int>&nums)
{
  unordered_map<int,int>freq;
 
  for(auto i:nums)
  {
    freq[i]++;
  }
  for(auto i: freq)
  {
    if(i.second ==1)
    {
      cout<<i.first<<endl;
    }
  }
  
}
int main()
{
  vector<int>nums = {1, 2, 2, 3, 3, 3};
  duplicate(nums);
}