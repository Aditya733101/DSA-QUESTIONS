#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cout<<"enter the get prime factor "<<endl;
  cin>>n;
  while(n!=1)
  {
    for(int i=2;i<=n;i++)
    {
      if(n%i==0)
      {
        cout<<i<<" ";
        n/=i;
        break;
      }
    }
  }

}