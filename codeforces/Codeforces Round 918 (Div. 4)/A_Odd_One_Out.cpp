#include <bits/stdc++.h>
using namespace std;
int main(){
   long long int n,a,b,c;
   cin>>n;

   for(int i=0;i<n;i++){
     cin>>a>>b>>c;

     if(a==b && a!=c && b!=c ){
        cout<<c<<endl;
     }
     else if(b==c && b!=a && c!=a ){
        cout<<a<<endl;
     }else{
         cout<<b<<endl;  
     }
   }

    return 0;
}