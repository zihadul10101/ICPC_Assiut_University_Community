#include <bits/stdc++.h>
using namespace std;
int main() 
{ 
   string s1,s2;
   cin>>s1>>s2;
   reverse(s2.begin(), s2.end());
   // strrev(s2);
    // for(i = s2.length() - 1; i >= 0; i--)
    // {
    //   	cout<<s2[i];
    // }
   if(s1==s2){
    cout<<"YES"<<endl;
   }else{
    cout<<"NO"<<endl;
   }
    return 0;
}