#include <bits/stdc++.h>
using namespace std;
void solve(){
   long long int n;
   cin>>n;
     vector<int> arr(n);
   for (int i = 0; i <n; i++)
   {
      cin>>arr[i];

   }
  sort(arr.begin(), arr.end()); 
  long long int res=0;
    for (int i = 1; i <n; ++i)
   {
    res+=abs(arr[i]-arr[i-1]);
   
   }
     cout<<(res)<<endl;
   
    
}
int main() {

   long long int testCasse;
   cin>>testCasse;
   while (testCasse--)
   {
  
    solve();
   }
   

    return 0;
}