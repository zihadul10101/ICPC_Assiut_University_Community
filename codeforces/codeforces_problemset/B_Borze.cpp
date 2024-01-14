#include <bits/stdc++.h>
using namespace std;
// ++i (pre-increment): Increments the value of i before its current value is
//  used. So, ++i increments i and then returns the updated value.

// i++ (post-increment): Uses the current value of i and then increments it
// . So, i++ returns the current value of i and then increments it.
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

      string ch,ans;
      cin>>ch;
      int len=ch.length();
    for(int i=0;i<len;i++){
    if(ch[i]=='.'){
        ans+='0';
    }
    if(ch[i]=='-' && ch[i+1]=='.'){
         ans+='1';
         ++i;// Skip the next character
    }
  if(ch[i]=='-' && ch[i+1]=='-'){
        ans+='2';
        ++i;// Skip the next character
    }
    }
cout<<ans<<endl; 
     return 0;
}
// i++ (post-increment):
// int i = 5;
// int result = i++;  // result is assigned the value of i before the increment (i.e., 5)
// // i is now 6
// ++i (pre-increment):
// int i = 5;
// int result = ++i;  // i is incremented first, then result is assigned the updated value of i (i.e., 6)
// // i is now 6


