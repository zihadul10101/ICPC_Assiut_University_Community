#include <bits/stdc++.h>
using namespace std;
#define yes "YES"
#define no "NO"
void solve(){
  long long int a,b,d;
    cin>>a>>b;
    d=abs(a-b);
    if(d%10==0){
        cout<<d/10<<endl;
    }else{
cout<<(d/10+1)<<endl;
    }

}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
int testCase;
cin>>testCase;

for(int j=0;j<testCase;j++){
  solve();   
}


    return 0;
}