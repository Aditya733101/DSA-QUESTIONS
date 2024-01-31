// Check if the given number is Harshad(Or Niven) Number
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number "<<endl;
    cin>>n;
    int temp=n;
    int sum=0;
    while(n>0)
    {
        int rem=n%10;
        sum+=rem;
        n/=10;
    }
    if(temp%sum==0)
    {
        cout<<temp<<" number is harshad number"<<endl;
    }
    else{
        cout<<temp<<" number is not harshad number "<<endl;
    }

}