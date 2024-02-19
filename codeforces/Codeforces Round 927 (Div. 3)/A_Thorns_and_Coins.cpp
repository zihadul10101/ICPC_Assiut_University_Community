#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n,flag=0;cin>>n;
    string s;cin>>s;
    for (int i = 0; i < s.length(); i++)
    {
      if(s[i]=='@'){
      flag++;
    }  
    }
    cout<<flag<<endl;
    
   
}
int main(){
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}