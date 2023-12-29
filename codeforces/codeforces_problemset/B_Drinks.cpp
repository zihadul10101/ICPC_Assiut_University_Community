#include <bits/stdc++.h>
using namespace std;

int main() {
     
     long long int n,sum=0;
     cin>>n;
      long long int arr[n];
      for(int i=0;i<n;i++){
        cin>>arr[i];
        sum+=arr[i];
      }
      
    double result = static_cast<double>(sum) / n;

   cout<<fixed <<setprecision(12) << result <<endl;
    return 0;
}