#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the value ";
    cin>>n;
    int temp = n;
    int rev =0;
    while(n!=0)
    {
        int rem = n%10;
        rev+=rem*rem*rem;
        n=n/10;
    }
    if(temp==rev)
    {
        cout<<"Aramstrong number "<<temp<<endl;
    }
    else
    {
        cout<<"Not Armstrong "<<temp<<endl;
    }

}
// find armstrongNumber in this range for 1000 :- 
// #include<iostream>
// using namespace std;
// int main()
// {
//    int sum,num,temp;
//     for(int i=1;i<=1000;i++)
//     {
//          sum =0;
//          num = i;
//          temp = num;
//         while(num!=0)
//         {
//             int rem = num%10;
//             sum+=rem*rem*rem;
//             num=num/10;
//         }
//         if(temp==sum)
//     {
//         cout<<"armstrong number "<<temp<<endl;
//     }
//     else{
//         cout<<" not Armstrong number "<<temp<<endl;
//     }
//     }
    
    return 0;
}
