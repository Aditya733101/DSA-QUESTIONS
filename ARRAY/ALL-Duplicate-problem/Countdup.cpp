// Count Duplicates:

// Problem: Given an array, count the number of duplicate elements.
// Example: Input: [1, 2, 2, 3, 3, 3], Output: 2.
#include<bits/stdc++.h>
using namespace std;
int duplicate(vector<int>&nums)
{
  unordered_map<int,int>freq;
  int count =0;
  // vector<int>ans;
  for(auto i:nums)
  {
    freq[i]++;
  }
  for(auto i: freq)
  {
    if(i.second >1)
    {
      count++;
      // ans.push_back(count);
    }
  }
  return count;
}
int main()
{
  vector<int>nums = {1, 2, 2, 3, 3, 3};
  cout<<"count is. -- "<<duplicate(nums)<<endl;

}