// min,max,sum of elements,Reverse

#include <bits/stdc++.h>
using namespace std;

int main() {

int n,min;
cin>>n;
int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];   
    }
     for(int i=0; i<n; i++){
        min=arr[0];
        if(min<arr[i]){
            min=arr[i];
        }
         
     }
    cout<<min<<" ";
    return 0;
}

