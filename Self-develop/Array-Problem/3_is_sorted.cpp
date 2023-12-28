// is sorted

#include <bits/stdc++.h>
using namespace std;


bool isSorted(int arr[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        if (arr[i] > arr[i + 1]) {
            return false; // Array is not sorted
        }
    }
    return true; // Array is sorted
}
int main() {

int n,min;
cin>>n;
int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];   
    }
    if (isSorted(arr, n)) {
        cout << "The array is sorted." << endl;
    } else {
        cout << "The array is not sorted." << endl;
    }
    return 0;
}
// n = 5
// arr = 10 20 50 70 90

// | Iteration | Array State      | Condition               | Result            |
// |-----------|------------------|-------------------------|-------------------|
// | 0         | 10 20 50 70 90   | 10 <= 20 (true)         | Continue          |
// | 1         | 10 20 50 70 90   | 20 <= 50 (true)         | Continue          |
// | 2         | 10 20 50 70 90   | 50 <= 70 (true)         | Continue          |
// | 3         | 10 20 50 70 90   | 70 <= 90 (true)         | Continue          |
// | 4         | 10 20 50 70 90   | Loop ends (i = n-1)     | Array is sorted    |


