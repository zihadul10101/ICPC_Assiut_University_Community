#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int n,flag=0;
    cin >> n;
    // int res=sqrt(n);
    // cout<<res<<endl;
  if(n == 0 || n == 1){
   	 cout<<"NO"<<endl;
        flag=1;
   }
    for(int i=2;i<=sqrt(n);i++){
    if(n%i==0){
        cout<<"NO"<<endl;
        flag=1;
        break;
    }
    }
  if(flag==0){
       cout<<"YES"<<endl;  
  }
    return 0;

}
