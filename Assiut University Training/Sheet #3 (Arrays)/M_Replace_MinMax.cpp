#include <iostream>
using namespace std;

int main() {
    int size;
    cin >> size;
    int arr[size];

    // Input array elements
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    int minIndex = 0;
    int maxIndex = 0;

    // Find minimum and maximum indices
    for (int i = 1; i < size; i++) {
        if (arr[i] < arr[minIndex]) {
            minIndex = i;
        }
        if (arr[i] > arr[maxIndex]) {
            maxIndex = i;
        }
    }

    // Swap minimum and maximum values
    int temp = arr[minIndex];
    arr[minIndex] = arr[maxIndex];
    arr[maxIndex] = temp;

    // Print the modified array
    // cout << "Array after swapping min and max: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
