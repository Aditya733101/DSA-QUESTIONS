#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n,sum=0,temp;
    cout<<"enter the value\n";
    cin>>n;
   int t=n;
    temp=n;
    int power=0;
    while(n!=0)
    {
        int rem = n%10;
        power++;
        n=n/10;
    }
    while(t!=0)
    {
        int re = t%10;
        sum+=pow(re,power);
        t=t/10;
    }
    if(sum==temp)
    {
        cout<<"Armstrong Number "<<temp<<endl;
    }
    else{
        cout<<"Not Aramstrong "<<temp<<endl;
    }

    
    return 0;
}