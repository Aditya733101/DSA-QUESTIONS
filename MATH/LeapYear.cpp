// approch-
// 1. a year that is divisible by 4 and 400 but not divisible 100 that mean year its leap year
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int year;
    cout<<"enter the year -- "<<endl;
    cin>>year;
    if((year%4==0 && year%100!=0) || year%400==0)
    {
        cout<<year <<" year is leap year"<<endl;
    }
    else
    {
        cout<<year<<" year is not leap year"<<endl;
    }
}