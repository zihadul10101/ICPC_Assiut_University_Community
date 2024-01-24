#include <bits/stdc++.h>
using namespace std;
#define yes "YES"
#define no "NO"
void solve(){
 long long int a,b;
 cin>>a>>b;
 if((a+b)%2==0){
cout<<"Bob"<<endl;
 }else{
   cout<<"Alice"<<endl; 
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