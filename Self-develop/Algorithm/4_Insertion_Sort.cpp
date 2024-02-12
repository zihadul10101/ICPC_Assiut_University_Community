#include <bits/stdc++.h>
using namespace std;

void insertion_sort(int arr[], int n) {
    for(int i = 1; i < n; i++) {
        int temp = arr[i];
        int j = i - 1;
        while(j >= 0 && arr[j] > temp) {
            arr[j + 1] = arr[j]; // right move
            j--;
        }
        arr[j + 1] = temp;
    }
}


int main() {
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    insertion_sort(arr, n);


    // Print the sorted array
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}

// Initial array: [43, 31, 26, 29, 12]

// i = 1:

// temp = 31
// j = 0, arr[0] = 43 > temp
// Move 43 to the right: [43, 43, 26, 29, 12]
// Move temp (31) to its correct position: [31, 43, 26, 29, 12]
// i = 2:

// temp = 26
// j = 1, arr[1] = 43 > temp
// Move 43 to the right: [31, 43, 43, 29, 12]
// j = 0, arr[0] = 31 > temp
// Move 31 to the right: [31, 31, 43, 29, 12]
// Move temp (26) to its correct position: [26, 31, 43, 29, 12]
// i = 3:

// temp = 29
// j = 2, arr[2] = 43 > temp
// Move 43 to the right: [26, 31, 43, 43, 12]
// j = 1, arr[1] = 31 > temp
// Move 31 to the right: [26, 31, 31, 43, 12]
// j = 0, arr[0] = 26 > temp
// Move 26 to the right: [26, 26, 31, 43, 12]
// Move temp (29) to its correct position: [26, 29, 31, 43, 12]
// i = 4:

// temp = 12
// j = 3, arr[3] = 43 > temp
// Move 43 to the right: [26, 29, 31, 43, 43]
// j = 2, arr[2] = 31 > temp
// Move 31 to the right: [26, 29, 31, 31, 43]
// j = 1, arr[1] = 29 > temp
// Move 29 to the right: [26, 29, 29, 31, 43]
// j = 0, arr[0] = 26 > temp
// Move 26 to the right: [26, 26, 29, 31, 43]
// Move temp (12) to its correct position: [12, 26, 29, 31, 43]
// The final sorted array is: [12, 26, 29, 31, 43].
