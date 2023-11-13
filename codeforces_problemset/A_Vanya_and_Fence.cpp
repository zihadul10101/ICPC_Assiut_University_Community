#include <bits/stdc++.h>
using namespace std;
int main() 
{ 
  int n,h,count=0;
  cin>>n>>h;
  for(int i=0;i<n;i++){
    int arr[n];
    cin>>arr[i];
    if(arr[i]<=h){
     count=count+1;;
    }else{
         count = count+2;  
    }
  }
  cout<<count<<endl;
    return 0;
}