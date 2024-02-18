#include <bits/stdc++.h>
#define INF 10000000
using namespace std;
void solve()
{
    int n;
    cin >> n;
    //books into four types "00", "01", "10", "11"
    // We take the shortest "01" and the the shortest "10".
    // We take the shortest "11".
    int a=INF;
    int b=INF;
    int c=INF;
    for (int i = 0; i < n; i++)
    {
        int m;
        string s;
        cin >> m;
        cin >> s;
        if(s=="11"){
          c=min(c,m);
          // cout<<"value both"<<c<<endl;
        }else if(s=="01"){
          b=min(b,m);  
          // cout<<"value two"<<b<<endl; 
        
        }else if(s=="10"){
          a=min(a,m);  
          //cout<<"value one"<<a<<endl; 
        } 
      
    }
    int ans=min(c,a+b);
   // cout<<"ans"<<ans<<endl;
    if(ans>=INF){
        cout<<"-1"<<endl;
    }else{
      cout<<ans<<endl;
    }
}
int main()
{
    int testCase;
    cin >> testCase;
    while (testCase--)
    {
        solve();
    }
    return 0;
}