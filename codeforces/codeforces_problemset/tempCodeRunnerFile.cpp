#include <bits/stdc++.h>
using namespace std;
#define yes "YES"
#define no "NO"

int main() {
   int n, m, a, b;
   cin>>n>>m>>a>>b;
   if(m*a<=b){
       cout<<n*a<<endl;
       // 6 2 1 2
       //6
   }else{
// 5 2 2 3
// 8
// n/m=5/2=2*3= 6 + min((1)*2,3) =8 

    cout<<(n/m)*b+min((n%m)*a,b)<<endl;
  
   }
  
    return 0;
}