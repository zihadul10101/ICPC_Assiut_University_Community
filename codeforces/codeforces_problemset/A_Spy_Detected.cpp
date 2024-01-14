#include <bits/stdc++.h>
using namespace std;

void solve(int n) {
    int arr[n];
    int count=0;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];  
    }
                            //11 13 11 11
    // ij=1 4 4 4 4          1111 1313 1111 1111
     //i= 11 44 44 44 44     1311 1313 1311 1311
     //i= 41 44 44 44 44     1111    
     //i= 41 44 44 44 44     11
     //i= 41 44 44 44 44
    // i= 41 44 44 44 44
    for(int j = 0; j<n; j++)
      {
        int tmp = 0;
        for(int k = 0; k<n; k++)
        {
          if(arr[j] == arr[k]) tmp++;
        }
        if(tmp == 1){
          cout << j+1 << endl;
        } 
      }
    }


int main() {
    int t; // number of test cases
    cin >> t;

    while (t--) {
        int n; // size of the array
        cin >> n;
        solve(n);
    }
    return 0;
}
// #include<iostream>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while (t--){
//         int n;
//         cin>>n;
//         int ar[n];
//         for (int i = 0; i < n; ++i) {
//             cin>>ar[i];
//         }
//         bool found = false;
//         for (int i = 1; i <n-1 ; ++i) {
//             if (ar[i]!=ar[i-1] && ar[i]!=ar[i+1]){
//                 cout<<i+1<<"\n";
//                 found = true;
//             }
//         }
//         if (!found){
//             if (ar[0]!=ar[1]){
//                 cout<<1<<"\n";
//             } else{
//                 cout<<n<<"\n";
//             }
//         }
//     }
// }