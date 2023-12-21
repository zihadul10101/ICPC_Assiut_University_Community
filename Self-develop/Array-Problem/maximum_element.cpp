// min,max,sum of elements,Reverse

#include <bits/stdc++.h>
using namespace std;

int main() {
//     int arr[6] = {10, 20, 30,50,60,70};
//    int length = sizeof(arr)/sizeof(arr[0]); //length calculation
int n,max;
cin>>n;
int arr[n];
    for(int i=0;i<n;i++){
        max=arr[0];
        cin>>arr[i]; 
       
        if(max<arr[i]){
            max=arr[i];
        }
    }
     
    cout<<max<<endl; 
    return 0;
}

