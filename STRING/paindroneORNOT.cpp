#include<bits/stdc++.h>
using namespace std;
int main()
{
 string name ="madam";
 string temp= name;
 reverse(name.begin(),name.end());
 if(temp==name)
 {
  cout<<" palindrome string"<<endl;
 }
 else{
  cout<<"not palindrome string"<<endl;
 }

}