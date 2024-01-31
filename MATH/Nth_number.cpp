//C++ Program to find the Sum of N Natural Numbers
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  int sum = 0;
  cout<<"enter the number "<<endl;
  cin>>n;
  for(int i=1;i<=n;i++)
  {
    sum+=i;
  }
  cout<<"sum is - "<<sum<<endl;
}
