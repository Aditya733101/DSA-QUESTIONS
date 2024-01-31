// Greatest of three numbers

#include<bits/stdc++.h>
using namespace std;
// int main()
// {
//     int a,b,c;
//     cout<<"enter the three value :"<<endl;
//     cin>>a>>b>>c;
//     if(a>=b && a>=c)
//     {
//         cout<<"Largest number is :"<<a<<endl;
//     }
//     if(b>=a && b>=c)
//     {
//         cout<<"Largest number is :"<<b;
//     }
//     if(c>=a && c>=b)
//     {
//         cout<<"Lergest number is :"<<c<<endl;
//     }
//     return 0;
// }

// function call:
int main()
{
    int a,b,c;
    cout<<"enter the three value :"<<endl;
    cin>>a>>b>>c;
    cout<<"greater number is "<<max(a, max(b,c))<<endl;
}