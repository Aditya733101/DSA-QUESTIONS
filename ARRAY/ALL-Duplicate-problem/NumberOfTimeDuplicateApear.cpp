#include<bits/stdc++.h>
using namespace std;
void duplicate(vector<int>&nums)
{
  unordered_map<int,int>freq;
  // vector<int>ans;
  for(auto i:nums)
  {
    freq[i]++;
  }
  for(auto i: freq)
  {
    if(i.second >1)
    {
      cout<<i.first<<" Appears - "<<i.second<<endl;
    }
  }
  
}
int main()
{
  vector<int>nums = {1, 2, 2, 3, 3, 3};
  duplicate(nums);

}