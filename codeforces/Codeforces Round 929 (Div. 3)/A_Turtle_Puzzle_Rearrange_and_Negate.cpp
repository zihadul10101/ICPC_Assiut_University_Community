#include <bits/stdc++.h>
#define ll   long long
using namespace std;

int main() {
     int t;cin>>t;
     while(t--){
        int n,sum=0;
        cin>>n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
        cin>>arr[i];
        sum+=abs(arr[i]);
        }
       cout<<sum<<endl; 
     }
    
    return 0;
}