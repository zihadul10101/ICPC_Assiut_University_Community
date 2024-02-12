#include <bits/stdc++.h>
using namespace std;




int partition(int arr[], int l, int h) {// n=10 arr=8 3 1 7 0 4 2 9 6 5   l=0,h=9
    int pivot = arr[l]; //8
    int i = l; //0
    int j = h; //9
    while (i < j) { //0<9
        while (arr[i] <= pivot) { //8<=8,
            i++; //i=1+
        }
        while (arr[j] > pivot) { // 5>8
            j--; 
        }
        if (i < j) {
            swap(arr[i], arr[j]);
            // 5 3 1 7 0 4 2 9 6 8
        }
    }
    swap(arr[l], arr[j]);
    return j;
}

void quick_sort(int arr[], int l, int h) {
    if (l < h) {
        int j = partition(arr, l, h);
        quick_sort(arr, l, j);  // Recursive call for the left partition
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
   int l=0; int h= n-1;
    quick_sort(arr, l, h);

    // Print the sorted array
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}

