#include <bits/stdc++.h>
using namespace std;
#define yes "YES"
#define no "NO"
void solve(){
    int n,plus=0,minus=0;
    cin>>n;
     string ch;
     cin>>ch;
    for(int i=0;i<n;i++){
    
     if(ch[i]=='+'){
       plus++;
     }else{
       minus++;
     }


    }
 cout<< abs(plus-minus) <<endl;
 

}
int main() {
int testCase;
cin>>testCase;

for(int j=0;j<testCase;j++){
  solve();   
}


    return 0;
}