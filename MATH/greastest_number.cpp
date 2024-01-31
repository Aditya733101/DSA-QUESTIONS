// Find the Greatest of the Two Numbers in C++

#include<bits/stdc++.h>
using namespace std;
int main()
{
  int a,b;
  cout<<"enter the two number"<<endl;
  cin>>a>>b;
  if(a==b)
  {
    cout<<"number is equal"<<endl;
  }
  else if(a<b){
    cout<<"b is greatest number"<<endl;
  }
  else
  {
    cout<<"a is greatest number"<<endl;
  }
}