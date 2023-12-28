#include <bits/stdc++.h>
// #include <algorithm>  // Include the algorithm header for the sort function
// using namespace std;

// int main() {
//     long long int t;
//     cin >> t;

//     while (t--) {
//       long long  int n;
//         cin >> n;

//         int left[100000], right[100000], weights[100000];

//         // Reading left endpoints
//         for (int i = 0; i < n; ++i) {
//             cin >> left[i];
        
//               //  cout<<"left"<<left[i]<<endl;
//         }
//       sort(left, left + n); 
//         // Reading right endpoints
//         for (int i = 0; i < n; ++i) {
//             cin >> right[i];
               
          
//               //   cout<<"right"<<right[i]<<endl;
//         }
//     sort(right, right + n); 
//         // Reading initial weights
//         for (int i = 0; i < n; ++i) {
//             cin >> weights[i];
         
        
//           //    cout<<"weight"<<weights[i]<<endl;
//         }
//            sort( weights,  weights + n, greater<int>());
//       //        for (int i = 0; i < n; i++) {
//       // // cout<<"left right weight"<< left[i] << right[i]<< weights[i]<<endl;
//       //        }
//         long long int totalWeightedLength = 0;
//         for (int i = 0; i < n; i++) {
//       if(right[i]>left[i]){
//               totalWeightedLength  += (right[i] - left[i]) * weights[i];
//                 //  cout <<"Data"<< "+"<< (right[i] - left[i]) <<"*" <<weights[i]<< endl;

//       }
//         }

//         cout << totalWeightedLength << endl;
//     }

//     return 0;
// }
