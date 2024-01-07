#include <bits/stdc++.h>
using namespace std;
#define yes "YES"
#define no "NO"

int main() {
   int n, m, a, b;
   cin>>n>>m>>a>>b;
   if(m*a<=b){
       cout<<n*a<<endl;
   }else{
    cout<<m*b<<endl;
  
   }
  
    return 0;
}