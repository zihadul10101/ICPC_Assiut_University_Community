// min,max,sum of elements,Reverse

#include <bits/stdc++.h>
using namespace std;

int main() {

int n,sum=0,product=1,devid;
cin>>n;
int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i]; 
        sum+=arr[i];  
        product*=arr[i];  
     
    }
  
    cout<<"Sum"<<"="<<sum<<" ";
    cout<<"product"<<"="<<product<<" ";
   
    return 0;
}

