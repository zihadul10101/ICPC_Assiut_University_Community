#include <bits/stdc++.h>
#define ll    long long
using namespace std;

int main() {
   int a,b,flag=0;
   cin>>a>>b;
 
   while(a<=b){
      a*=3;
      b*=2;
      flag++;
   }
   cout<<flag;
    return 0;

}
