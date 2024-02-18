#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    int arr[n];
    int counter=0,maex=0; 
    for(int i=0;i<n;i++){
        cin>>arr[i];
    // 1 0 0 1 0
        if(arr[i] == 0)
        {
            counter++;
        }
      else
        {
            maex = max(maex, counter);// max(0,2)=2//  
            counter = 0;
        }
        
    }
   cout<<max(maex,counter)<<endl;
 
}
int main(){
    int testCase;
    cin>>testCase;
    while(testCase--){
        solve();
    }
    return 0;
}
