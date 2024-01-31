#include<iostream>
using namespace std;
void reverse(int n);
int main()
{
    int n;
    cout<<"enter  the interger value\n";
    cin>>n;
    reverse(n);
}
 void reverse(int n)
 {
     int rev=0;
     int temp =n;
     while(n>0)
     {
         int rem = n%10;
         rev = rev*10+rem;
         n=n/10;
     }
    n=rev;
     cout<<" After reverse --- "<<n<<endl;
 }