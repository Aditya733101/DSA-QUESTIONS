#include<bits/stdc++.h>
using namespace std;
void reverseAR(int arr[],int start,int end)
{
  while(start<end)
  {
    int temp = arr[start];
    arr[start]=arr[end];
    arr[end]=temp;
    start++;
    end--;
  }
}
void printRev(int arr[],int n)
{
  for(int i=0;i<n;i++)
  {
    cout<<arr[i]<<" ";
  }
}
int main()
{
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  int start = 0;
  int end = n-1;
  reverseAR(arr,start,end);
  printRev(arr,n);

}