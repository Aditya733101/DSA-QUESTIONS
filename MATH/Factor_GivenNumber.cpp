// Factors of a Given Number
#include<bits/stdc++.h>
using namespace std;
//  void isprime(int n)
//  {
//      int c=0;
//      if(n%2==0)
//      {
//          c++;
//      }
//      else{
//          cout<<n<<" ";
//      }
//  }
int main()
{
    int n;
    cout<<"enter the number-- "<<endl;
    cin>>n;
    cout<<"given number factors is "<<endl;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
           cout<<i<<" ";
        }
    }
}
