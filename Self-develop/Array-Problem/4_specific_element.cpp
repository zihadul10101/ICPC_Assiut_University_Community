#include <bits/stdc++.h>
using namespace std;

int findIndex(int arr[], int size, int target) {
    for (int i = 0; i < size; ++i) {
        if (arr[i] == target) {
            return i; // Return the index if the element is found
        }
    }
    return -1; // Return -1 if the element is not found in the array
}

int main() {
    const int size = 5;
    int myArray[size] = {10, 20, 30, 40, 50};

    int targetElement;
    cout << "Enter the element to find: ";
    cin >> targetElement;

    int index = findIndex(myArray, size, targetElement);
    if (index != -1) {
        cout << "Element " << targetElement << " found at index " << index << endl;
    } else {
        cout << "Element " << targetElement << " not found in the array" << endl;
    }

    return 0;
}
