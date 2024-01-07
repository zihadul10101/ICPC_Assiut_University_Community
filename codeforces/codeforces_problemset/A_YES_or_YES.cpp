#include <bits/stdc++.h>
using namespace std;
#define yes "YES"
#define no "NO"

int main() {
   int t;
   cin>>t;
   while(t--){
    string ch;
     cin>>ch;
    
    if((ch[0]=='Y' || ch[0]=='y') && (ch[1]=='E' || ch[1]=='e') && (ch[2]=='S' || ch[2]=='s')){
        cout<<"YES"<<endl;
     }else{
       cout<<"NO"<<endl;  
     }
     
    
   }
    return 0;
}