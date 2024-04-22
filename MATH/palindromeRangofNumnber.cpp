#include<bits/stdc++.h>
using namespace std;
 bool palindrome(int num)
 {
  int temp = num;
  int res = 0;
  while(num>0)
  {
    int rem = num%10;
    res = res*10+rem;
    num/=10;
  }
  return res == temp;
 }
int main()
{
  int min = 100;
  int max = 150;
  for(int i=min;i<=max;i++)
  {
    if(palindrome(i))
    {
      cout<< i << " "<<endl;
    }
  }
}