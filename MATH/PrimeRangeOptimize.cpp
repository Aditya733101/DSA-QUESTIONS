#include<bits/stdc++.h>
using namespace std;

 bool isPrime(int N)
 {
     for(int j=2;j<sqrt(N);j++)
    {
        if(N%j==0)
        {
            return false;
        }
    }
    return true;
 }

 void print(int a,int b)
 {
     cout<<a<<" b/t"<<b<<" prime number is---"<<endl;
          for(int i=a;i<=b;i++)
     {
         if(isPrime(i))
         {
             cout<<i<<" ";
         }
     }
 }

int main()
{
    int a,b;
    cout<<"enter the first value--"<<endl;
    cin>>a;
    cout<<"enter the second value--"<<endl;
    cin>>b;
    print(a,b);

}