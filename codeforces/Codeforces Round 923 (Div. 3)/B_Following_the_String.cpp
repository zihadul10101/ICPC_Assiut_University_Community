#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define boost ios_base::sync_with_stdio(false),cin.tie(NULL)
 

void solve(){
       
    int a; 
    cin>>a;
    int arr[a+1], arr2[a]={0};
    
    for(int i = 0; i<a ; i++){
        
        cin>>arr[i];
    }
     for(int i =0; i<a ; i++){
        
        cout<<char(97+arr2[arr[i]]);
        
        arr2[arr[i]]++;
        
    }
    
    cout<<endl;
}
int main() {
    int testCase;
    cin >> testCase;
    while (testCase--) {
        solve();
    }
    return 0;
}
