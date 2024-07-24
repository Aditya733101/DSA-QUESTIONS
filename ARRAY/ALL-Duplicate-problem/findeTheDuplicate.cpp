// Find all repeating elements in an array


// 11

// 0
// Problem Statement: Find all the repeating elements present in an array.

// Examples:

// Example 1:
// Input: 
// Arr[] = [1,1,2,3,4,4,5,2]
// Output:
//  1,2,4
// Explanation:
//  1,2 and 4 are the elements which are occurring more than once.

// Example 2:
// Input:
//  Arr[] = [1,1,0]
// Output:
//  1
// Explanation:
//  Only 1 is occurring more than once in the given array.
#include<bits/stdc++.h>
using namespace std;
void FindDupicate(vector<int>&nums)
{
  unordered_map<int,int>elementCount;
  // vector<int>ans;
  for(auto i:nums)
  {
    elementCount[i]++;
  }
  for(auto i : elementCount)
  {
    if(i.second>1)
    {
      cout<<i.first<<" ";
    }
  }
}
int main()
{
  vector<int>nums = {1,1,2};
  FindDupicate(nums);
  }