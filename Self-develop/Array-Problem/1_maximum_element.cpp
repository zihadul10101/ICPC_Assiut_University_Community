// min,max,sum of elements,Reverse

#include <bits/stdc++.h>
using namespace std;

int main() {

int n,min,max,sum=0;
cin>>n;
int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];   
    }
     for(int i=0; i<n; i++){
        min=arr[0];
        max=arr[0];
        if(min>arr[i]){
            min=arr[i];
        }   
        if(max<arr[i]){
            max=arr[i];
        }   
        sum=sum+arr[i];
     }
    cout<<min<<" ";
    cout<<max<<" ";
    cout<<sum<<" ";
    return 0;
}

