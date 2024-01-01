#include <bits/stdc++.h>
using namespace std;

int main() {
   long long t;
   cin>>t;
   
   for(int i=0;i<t;i++){
     long long int a,b;
     cin>>a>>b;
     if(a%b == 0){
cout<<"0"<<endl;
     }else{
   int res=b-(a%b);
   cout<<res<<endl;
     }
   }

    

    return 0;
}