#include<bits/stdc++.h>
using namespace std;
int Scalerproduct(int arr[],int size1,int arr2[],int size2)
{
  // first array accending order
  int product = 0;
  sort(arr,arr+size1);
  //second sort array are decending order
  sort(arr2,arr2+size2);
  int low = 0;
  int high = size2-1;
  while(low<high)
  {
    int temp = arr2[low];
    arr2[low]=arr2[high];
    arr2[high]=temp;
    low++;
    high--;
  }
  for(int i=0;i<size1;i++)
  {
    product+=arr[i]*arr2[i];
  }
  return product;
}
int main()
{
  int arr[] = {1, 2, 6, 3, 7};
  int size1 = sizeof(arr)/sizeof(arr[0]);
  int arr2[] = {10, 7, 45, 3, 7};
  int size2 = sizeof(arr2)/sizeof(arr2[0]);
  cout<<Scalerproduct(arr,size1,arr2,size2)<<endl;

}