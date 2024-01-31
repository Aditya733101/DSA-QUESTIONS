//Find the Greatest Number Among Three Numbers in Java
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int a,b, c;
  cout<<" enter the three number "<<endl;
  cin>>a>>b>>c;
  if(a<b && c<b)
  {
    cout<<b<<" is greatest"<<endl;
  }
  else if(a>b && a>c)
  {
    cout<<a<<"is greatest"<<endl;;
  }
  else{
    cout<<c<<"6 is greatest"<<endl;
  }
}