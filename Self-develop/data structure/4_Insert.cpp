#include <bits/stdc++.h>
using namespace std;

void insertElement(int arr[], int &n, int k, int item) {
    int j = n;
    while (j >= k) {
        arr[j] = arr[j - 1];
        j--;
    }
    arr[k - 1] = item;
    n++; // Increment the size of the array
}

int main() {
    int linnerArray[] = {1, 2, 3, 4, 5};
    int size = sizeof(linnerArray) / sizeof(linnerArray[0]);

    insertElement(linnerArray, size, 4, 10); // Insert 10 at index 4
    for (int i = 0; i < size; ++i) {
        cout << linnerArray[i] << " ";
    }
    cout << endl;
    return 0;
}
