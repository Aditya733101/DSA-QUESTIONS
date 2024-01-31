#include<bits/stdc++.h>
using namespace std;
bool cheakPalindrom(int num)
{ int pal = 0; 
  int temp=num;
  while(num!=0)
  {
    int rem = num%10;
    pal = pal*10+rem;
    num/=10;
  }
  return pal==temp;
}
int main()
{
  int n;
  cout<<"enter the size of array "<<endl;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  sort(arr,arr+n);
  for(int i=n-1;i>=0;i--)
  {
    if(cheakPalindrom(arr[i]))
    {
      cout<<"longest palindrome number "<<arr[i]<<endl;
      break;
    }
    
  }


}
// C++ program to find the frequency of elements in an array
