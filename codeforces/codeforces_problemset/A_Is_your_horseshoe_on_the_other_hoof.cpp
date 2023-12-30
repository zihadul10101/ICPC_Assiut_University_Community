#include <bits/stdc++.h>
using namespace std;

int main() {
    
    long long int arr[4],count=0;
     for(int i=0;i<4;i++){
        cin>>arr[i];
     }
     // 1 2 3 2    1 2 2 3
     sort(arr,arr+4);
     for(int i=0;i<4;i++){
       if(arr[i]==arr[i+1]){
        count++;
       }
     }
     cout<<count<<endl;
    return 0;
}

