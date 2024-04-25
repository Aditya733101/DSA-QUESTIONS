#include<bits/stdc++.h>
using namespace std;
bool ispalindome(string name)
{
  string add = "";
  for(char c: name)
  {
    if(isalnum(c))
    {
      add+=tolower(c);
    }
  }
  int low=0;
  int high = add.length()-1;
  while(low<high)
  {
    if(add[low]!=add[high])
    {
      return false;
    }
    low++;
    high--;
  }
  return true;
}


int main()
{
    string name = "A man, a plan, a canal: Panama";
    if(ispalindome(name))
    {
      cout<<"palindrome string "<<endl;
    }
    else{
      cout<<"not palindrome string"<<endl;
    }
}