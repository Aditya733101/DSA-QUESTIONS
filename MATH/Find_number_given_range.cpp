//Find the Sum of Numbers in a Given Range in C++
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int num1,num2,sum=0;
  cout<<"enter the number of num1 and num2 "<<endl;
  cin>>num1>>num2;
  for(int i=num1;i<=num2;i++)
  {
    sum+=i;
  }
  cout<<"sum of range "<<sum<<endl;
}