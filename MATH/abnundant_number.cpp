//Check if the number is an abundant number or not
//Divisors of 18 are 1,2,3,6,9. 1+2+3+6+9=21, Since 21 is greater than 18, 18 is an abundant number.
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number-- "<<endl;
    cin>>n;
    int temp=n;
    int sum=0;
    for(int i=1;i<n;i++)
    {
        if(n%i==0)
        {
            sum+=i;
        }
    }
    if(temp<sum)
    {
        cout<<temp<<"number is abnundent"<<endl;
    }
    else{
        cout<<temp<<"number is not adnundent"<<endl;
    }
}