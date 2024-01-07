#include <bits/stdc++.h>
using namespace std;
#define yes "YES"
#define no "NO"
void solve(){
   string ch;
   cin>>ch;
       if((ch[0]+ch[1]+ch[2])==(ch[3]+ch[4]+ch[5])){
        cout<<"YES"<<endl;
    }else{
       cout<<"NO"<<endl;  
    }

}
int main() {
int testCase;
cin>>testCase;

for(int j=0;j<testCase;j++){
  solve();   
}


    return 0;
}