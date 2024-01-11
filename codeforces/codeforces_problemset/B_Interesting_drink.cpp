#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m,k,ans;
      cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
sort(arr,arr+n);
cin>>m;
while(m--)
    {
        cin>>k;
        ans=upper_bound(arr,arr+n, k)-arr;
        cout<<ans<<endl;
    }
     return 0;
}