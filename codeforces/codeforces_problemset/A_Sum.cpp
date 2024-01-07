#include <bits/stdc++.h>
using namespace std;
#define yes "YES"
#define no "NO"
const int MOD = 100;
int main() {
   int t,a,b,c,sum1,sum2;
   cin>>t;
   while(t--){
     cin>>a>>b>>c;
     
     if(((a+b) == c || (b+c) == a || (c+a) ==b)){
        cout<<"YES"<<endl;
     }else{
      cout<<"NO"<<endl;   
     }
   }
    return 0;
}