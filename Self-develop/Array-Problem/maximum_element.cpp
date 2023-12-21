// min,max,sum of elements,Reverse

#include <bits/stdc++.h>
using namespace std;

int main() {
//     int arr[6] = {10, 20, 30,50,60,70};
//    int length = sizeof(arr)/sizeof(arr[0]); //length calculation
int n;
cin>>n;
int arr[n],sum=0;
    for(int i=0;i<n;i++){
    
        cin>>arr[i]; 
        sum=sum+arr[i];
       
    }
     
    cout<<sum<<endl; 
    return 0;
}

