#include <bits/stdc++.h>
using namespace std;
#define yes "YES"
#define no "NO"

void solve(int n){
    int arr[n];
    long long answer=0;
    int maxi;
    for(int i=0; i<n; i++){
        cin >> arr[i];
        maxi==arr[0];
        if(maxi<arr[i]){
         maxi=arr[i];
  
        }
    }
      for(int i=0; i<n; i++){
          answer+=maxi-arr[i];
       // cout<<maxi-arr[i]<<endl; 
    }
   cout<<answer<<endl;

  
      
}
int main() {
    int n;
    cin >> n;
        solve(n);
    return 0;
}