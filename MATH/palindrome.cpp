#include<bits/stdc++.h>
using namespace std;
int main()
{
  int num;
  int reverse = 0;
  cout<<"enter the number"<<endl;
  cin>>num;
  int temp = num;
  while(num>0)
  {
    int rem = num%10;
    reverse = reverse*10+rem;
    num/=10;

  }
  if(reverse==temp)
  {
    cout<<"number is palindrome "<<endl;
  }
  else{
    cout<<"number is not palindrome"<<endl;
  }
}