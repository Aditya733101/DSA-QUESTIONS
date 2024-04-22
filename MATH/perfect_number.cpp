#include<bits/stdc++.h>
using namespace std;
bool perpectNumber(int num)
{
int temp = num;
 int sum = 0;
 for(int i=1;i<=num-1;i++)
 {
  if(num%i==0)
  {
    sum+=i;
  }
 }
 return sum==temp;
}
int main()
{
int num =15; //28;//
if(perpectNumber(num))
{
  cout<<"perfect number"<<endl;
}
else{
  cout<<"not perfect number"<<endl;
}

}