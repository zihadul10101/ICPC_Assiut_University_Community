
// #include <bits/stdc++.h>
// using namespace std;


// void removeDuplicates(int arr[], int &size) {
//     if (size <= 1) {
//         return;  // No duplicates to remove if size is 0 or 1
//     }

//     // Sort the array
//     sort(arr, arr + size);

//     // Remove duplicates by shifting elements
//     int index = 0;
//     for (int i = 1; i < size; ++i) {
//         if (arr[i] != arr[index]) {
//             arr[index++] = arr[i];
//         }
//     }

//     // Update the size of the array
//     size = index + 1;
// }

// int main(){
//     int size;
//     cout << "Enter the size of the array: ";
//     cin >> size;
//     int arr[maxSize];
//   // Input array size and elements
//     cout << "Enter the elements of the array: ";
//     for (int i = 0; i < size; ++i) {
//         cin >> arr[i];
//     }

//    // Remove duplicates
//     removeDuplicates(arr, size);

//     // Output the array without duplicates
//    cout << "Array after removing duplicates: ";
//     for (int i = 0; i < size; ++i) {
//        cout << arr[i] << " ";
//     }

//     return 0;

// }

