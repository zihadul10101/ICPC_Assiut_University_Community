#include <bits/stdc++.h>
#define ll   long long
using namespace std;

int main() {
    long long int t;cin>>t;
     while(t--){
      long long int n,sum=0;
        cin>>n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
        cin>>arr[i];
        sum+=(arr[i]);
        }
        if(sum%3 == 0){
            cout<<"0"<<endl;
        }else{
            
        }
       
     }
    
    return 0;
}