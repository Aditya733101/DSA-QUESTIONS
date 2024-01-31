// #include<iostream>
// using namespace std;
// int main()
// {
//     int n ,count=0,i;
//     cout<<"enter the value ";
//     cin>>n;
//     for(i=1;i<=n;i++)
//     {
//         if(n%i==0)
//         {
//             count++;
//         }
//     }
//     if(count==2)
//     {
//         cout<<"prime number\n";

//     }
//     else{
//         cout<<"not prime\n";
//     }
// }


//optimization code:-
#include<iostream>
using namespace std;
int prime(int n,int i);
int main()

{
    int n,i;
    cout<<"enter the value ";
    cin>>n;
  cout<<prime(n,i)<<endl;
  
}
 int prime(int n,int i)
 {
     if(n<=1)
    {
        return -1;
    }
    for(int i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            return -1;
        }
    }
    return 1;
 }