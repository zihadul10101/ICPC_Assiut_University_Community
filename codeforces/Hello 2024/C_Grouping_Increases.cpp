#include <bits/stdc++.h>
using namespace std;
#define yes "YES"
#define no "NO"
void solve(){
    int n,ans=0;
    cin>>n;
    int arr[n];
     
    for(int i=0;i<n;i++){
    cin>>arr[i];
    int s=n+2,t=n+2;

     if(s > t){
       swap(s,t);
     }
     if(arr[i]<=s)
     {
        s=arr[i];
     }
     else if(arr[i]<=t)
     {
       t=arr[i];
     }
     else
     {
        s=arr[i];
        ans++;
     }
    }
 cout<<ans <<endl;

}
int main() {
int testCase;
cin>>testCase;

for(int j=0;j<testCase;j++){
  solve();   
}
    return 0;
}