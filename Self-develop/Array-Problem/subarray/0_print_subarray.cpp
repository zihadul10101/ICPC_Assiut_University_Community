#include <iostream>
using namespace std;
void solve(){
     int n;
    cin >> n;
    int arr[n];

    for (int l = 0; l < n; l++) {
        cin >> arr[l];
    }

    // Outer loop for the starting index of subarray
    for (int i = 0; i < n; ++i) {
        // Inner loop for the ending index of subarray
        int maxVal = arr[i];  // Initialize maxVal to the first element of the subarray

        for (int j = i; j < n; ++j) {
            // Loop to calculate the maximum value in the current subarray
            maxVal = max(maxVal, arr[j]);

            // Print elements of current subarray
            //cout << "[";
            for (int k = i; k <= j; ++k) {
                // cout << arr[k];

                // if (k < j) {
                //     cout << ", ";
                // }
            }
            //cout << "] - Max Value: " << maxVal << endl;
            cout<< maxVal <<" ";
        }
      
    }
  cout<<endl;
}
int main() {
   int testCase;
   cin>>testCase;
   while(testCase--){
    solve();
   }
    return 0;
}
