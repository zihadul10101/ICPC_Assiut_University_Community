#include <bits/stdc++.h>
using namespace std;

int countNonDecreasingSubarrays(int arr[], int n) {
    int count = 0;
    int currentLength = 1;  // Current length of non-decreasing subarray ending at arr[i]

    for (int i = 1; i < n; ++i) {
        if (arr[i] >= arr[i - 1]) {
            // Current element is part of a non-decreasing subarray
            currentLength++;
        } else {
            // Current element breaks the non-decreasing sequence
            // Number of subarrays ending at arr[i - 1] is given by currentLength * (currentLength + 1) / 2
            count += (currentLength * (currentLength + 1)) / 2;
            currentLength = 1;  // Reset current length for the new subarray
        }
    }

    // Count the subarrays ending at the last element
    count += (currentLength * (currentLength + 1)) / 2;

    return count;
}

int main() {
    // Example usage:
   int testCase;
   cin>>testCase;
   while(testCase--){
     int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
       cin>>arr[i]; 
    }
    int result = countNonDecreasingSubarrays(arr, n);
    cout <<result << endl;
   }

    return 0;
}


// n = 5
// arr = {1, 4, 2, 3, 5}

// Iteration 1:
// i = 1, arr[i] = 4, arr[i-1] = 1
// (currentLength = 2)

// Iteration 2:
// i = 2, arr[i] = 2, arr[i-1] = 4
// (currentLength = 1, count += 3)  // count = 0 + (2 * 3) / 2

// Iteration 3:
// i = 3, arr[i] = 3, arr[i-1] = 2
// (currentLength = 1, count += 2)  // count = 3 + (1 * 2) / 2

// Iteration 4:
// i = 4, arr[i] = 5, arr[i-1] = 3
// (currentLength = 2, count += 3)  // count = 5 + (2 * 3) / 2

// Iteration 5:
// i = 5 (loop ends), arr[i] = N/A, arr[i-1] = 5
// (currentLength = 3, count += 6)  // count = 8 + (3 * 4) / 2

// Final result:
// Number of non-decreasing subarrays: 9
