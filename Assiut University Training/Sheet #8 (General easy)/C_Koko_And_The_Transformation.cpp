#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n,m,sum1=0,sum2=0;
    cin>>n>>m;
    int arr1[n];
    int arr2[m];
    for (int i = 0; i < n; i++)
    {
      cin>>arr1[i];
      sum1+=arr1[i];
    }
    for (int i = 0; i < m; i++)
    {
      cin>>arr2[i];
        sum2+=arr2[i];
    }
    // cout<<"sum1 "<<sum1<<endl;
    // cout<<"sum2 "<<sum2<<endl;
    if(sum1==sum2){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }
    
    return 0;
}