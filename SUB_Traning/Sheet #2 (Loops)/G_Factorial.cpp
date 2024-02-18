#include<bits/stdc++.h>
using namespace std;

int main() {
 int testCase;
 cin>>testCase;
 while(testCase--){
    long long  int n,fact=1;
      cin>>n;

   for(int i=1;i<=n;i++){
      fact=fact*i;
   }
   cout<<fact<<endl;
 }
    return 0;
}