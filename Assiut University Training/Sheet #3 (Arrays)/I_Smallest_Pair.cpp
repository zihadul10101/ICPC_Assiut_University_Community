// #include <bits/stdc++.h>
// using namespace std;

// int smallest_pair(int arr[], int n) { 
//     int min = INT_MAX;
//     for(int i = 0; i < n; i++) { 
//      for(int j=i+1;j<n;j++){
//         int result=arr[i] + arr[j] + j - i;
//        if (result < min) {
//            min = result;
//                 }
//      }
//     }
//      cout << min <<endl;
// }

// int main() {
//     int testCase,n;
//     cin >> testCase;
   
//     while(testCase--){
//         cin>>n;
//          int arr[n];
//   for (int i = 0; i <n; i++) {
//         cin >> arr[i];
//     }
//        smallest_pair(arr, n);
//     }

//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int testCases;
    cin >> testCases;
    while (testCases--) {
        int size;
        cin >> size;
        int arr[size];
        for (int i = 0; i < size; i++) {
            cin >> arr[i];
        }
        int min = INT_MAX; // Initialize min to a large value
       // int max = INT_MIN; // Initialize min to a large value
        for (int z = 0; z < size; z++) {
            for (int x = z + 1; x < size; x++) {
                int result = (arr[z] + arr[x]) + (x - z);
                if (result < min) {
                    min = result;
                }
            }
        }
        cout << min << endl;
    }
}