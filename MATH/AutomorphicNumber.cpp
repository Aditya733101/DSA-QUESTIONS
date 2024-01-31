//Check if a number is Automorphic Number
//Automorphic Number
//Explanation: Calculating 76 * 76 gives 5776, it ends with the given number.

#include<bits/stdc++.h>
using namespace std;
 bool isauto(int n){
     int sqare = n*n;
     while(n>0)
     {
         if(n%10 != sqare%10)
         {
             return false;
         }
         n/=10;
         sqare/=10;
     }
     return true;
 }
int main()
{
    int n;
    cout<<"enter the number "<<endl;
    cin>>n;
    if(isauto(n))
    {
        cout<<n<<" Number is automorphic "<<endl;
    }
    else{
        cout<<"number is not automorphic"<<endl;
    }

}