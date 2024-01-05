
// A peak element in an array is an element which is greater than or equal to its neighbors.
//  For an array with distinct elements, there can be multiple peak elements. 
// int arr[] = {1, 2, 3, 1};
// The peak element is at index 2: 3
// int arr[] = {1, 2, 1, 3, 5, 6, 4};
// The peak element is at index 5: 6
// int arr[] = {5, 10, 20, 15};
// The peak element is at index 2: 20
// int arr[] = {10, 20, 15, 2, 23, 90, 67};
// The peak element is at index 1: 20
// the problem is not work
#include <iostream>

int findPeakElement(const int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        bool isPeak = true;

        // Check if arr[i] is greater than its left neighbor
        if (i > 0 && arr[i] <= arr[i - 1]) {
            isPeak = false;
        }

        // Check if arr[i] is greater than its right neighbor
        if (i < size - 1 && arr[i] <= arr[i + 1]) {
            isPeak = false;
        }

        if (isPeak) {
            return i;
        }
    }

    return -1; // No peak element found.
}

int main() {
    int arr[] = {10, 20, 15, 2, 23, 90, 67};
    int size = sizeof(arr) / sizeof(arr[0]);
    int peakIndex = findPeakElement(arr, size);

    if (peakIndex != -1) {
        std::cout << "The peak element is at index " << peakIndex << ": " << arr[peakIndex] << std::endl;
    } else {
        std::cout << "No peak element found in the array." << std::endl;
    }

    return 0;
}
