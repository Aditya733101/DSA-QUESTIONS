#include<iostream>
using namespace std;
int main()
{
    int i,fact = 1;
    int value;
    cout<<"enter the factorial number "<<endl;
    cin>>value;
    for(i=1;i<=value;i++)
    {
        fact=fact*i;
    }
    cout<<"factorial number is "<<fact<<endl;
    return 0;
}