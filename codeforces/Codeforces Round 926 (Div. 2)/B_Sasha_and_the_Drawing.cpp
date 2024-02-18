#include<bits/stdc++.h>
using namespace std;
void solve(){
      long long int n,k,d;
      cin>>n>>k;
      d=4*n-2;
      
      if(k==d){
        cout<<2*n<<endl;
      }
      else if(k%2==0){
        cout<<k/2<<endl;
      }else{
         cout<<(k/2)+1<<endl;
      }
}
int main(){
    long long int testCase;
    cin>>testCase;
    while (testCase--)
    {
      solve();
    }
    
    return 0;
}