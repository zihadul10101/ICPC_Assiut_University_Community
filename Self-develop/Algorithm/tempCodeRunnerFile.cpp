#include <bits/stdc++.h>
using namespace std;

int partition(int arr[], int l, int h) {
    int pivot = arr[l];
    int i = l;
    int j = h;
    while (i < j) {
        while (arr[i] <= pivot) {
            i++;
        }
        while (arr[j] > pivot) {
            j--;
        }
        if (i < j) {
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[l], arr[j]);
    return j;
}

void quick_sort(int arr[], int l, int h) {
    if (l < h) {
        int j = partition(arr, l, h);
        quick_sort(arr, l, j+1);  // Recursive call for the left partition
        quick_sort(arr, j + 1, h);  // Recursive call for the right partition
    }
}

int main() {
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
   int l=0; int h=n - 1;
    quick_sort(arr, l, h);

    // Print the sorted array
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
