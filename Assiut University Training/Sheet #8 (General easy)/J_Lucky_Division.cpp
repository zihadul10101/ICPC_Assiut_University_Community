#include <bits/stdc++.h>
using namespace std;
int main()
{
     string s;
     cin>>s;
     for (int i = 0; i < s.length(); i++)
     {
      if(s[i]%10==4 || s[i]%10==7){
 cout<<"YES"<<endl;
      }else{
  cout<<"NO"<<endl;
      }
     }
     
 
    return 0;
}