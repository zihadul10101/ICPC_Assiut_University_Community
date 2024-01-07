#include <bits/stdc++.h>
using namespace std;
#define yes "YES"
#define no "NO"
void solve(){
    int n;
    cin>>n;
int arr[n];
int flag=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];  
         if (arr[i] != arr[i + 1]) {
         flag++; 
        } 
    } 
    cout<<flag<<endl;
}
int main() {
int testCase;
cin>>testCase;

for(int j=0;j<testCase;j++){
  solve();   
}


    return 0;
}