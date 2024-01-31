// Check if a number is a Strong Number or not
// Declare a variable  to store the sum of factorials.Initialize it to 0.
// Extract the individual digits of the given number and calculate the digits’s factorial.
// Add the computed factorial to the sum variable. 
// Once all the digits have been extracted  and their factorial has been added in the sum, compare the original number with sum.
#include<bits/stdc++.h>
using namespace std;
int getStrong(int n)
{
    int fact=1;
    for(int i=2;i<=n;i++)
    {
        fact*=i;
    }
    return fact;
}
int main()
{
    int n;
    cout<<"enter the number- "<<endl;
    cin>>n;
    int sum=0;
    int temp=n;
    while(n>0)
    {
        int rem =n%10;
        sum =sum+getStrong(rem);
        n/=10;
    }
    if(temp==sum && temp!=0)
    {
        cout<<temp<<" number is strong number "<<endl;
    }
    else{
        cout<<temp<<" number is not strong number "<<endl;
    }
}
