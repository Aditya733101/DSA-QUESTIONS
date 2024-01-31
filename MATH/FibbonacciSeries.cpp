#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the Number : "<<endl;
    cin>>n;
    int a,b;
    a=0;
    b=1;
    
    cout<<"Fibbonacci Series : "<<a<<" "<<b;
    for(int i=3; i<=n;i++)
    {
        int c = a+b;
        a=b;
        b=c;
        cout<<" "<<c;
    }

    return 0;
}