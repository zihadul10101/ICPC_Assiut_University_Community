// input
// const int size = 7;
// int array[size] = {5, 8, 2, 10, 15, 3, 12};
// output
// Largest three elements: 15 12 10

// | Iteration | `array[i]` | `firstLargest` | `secondLargest` | `thirdLargest` |
// |-----------|------------|-----------------|------------------|-----------------|
// | 1         | 12         | 12              | INT_MIN          | INT_MIN          |
// | 2         | 45         | 45              | 12               | INT_MIN          |
// | 3         | 78         | 78              | 45               | 12              |
// | 4         | 23         | 78              | 45               | 23              |
// | 5         | 56         | 78              | 56               | 45              |
// | 6         | 89         | 89              | 78               | 56              |
// | 7         | 34         | 89              | 78               | 56              |

// Array: 12 45 78 23 56 89 34 

// Checking element array[0] = 12
//   12 is larger than -2147483648. Updating largest elements.
//   Current largest three elements: 12 -2147483648 -2147483648

// Checking element array[1] = 45
//   45 is larger than 12. Updating largest elements.
//   Current largest three elements: 45 12 -2147483648

// Checking element array[2] = 78
//   78 is larger than 45. Updating largest elements.
//   Current largest three elements: 78 45 12

// Checking element array[3] = 23
//   23 is not larger than any of the largest elements. No update.
//   Current largest three elements: 78 45 12

// Checking element array[4] = 56
//   56 is not larger than any of the largest elements. No update.
//   Current largest three elements: 78 45 12

// Checking element array[5] = 89
//   89 is larger than 78. Updating second and third largest elements.
//   Current largest three elements: 89 78 45

// Checking element array[6] = 34
//   34 is not larger than any of the largest elements. No update.
//   Current largest three elements: 89 78 45

// Final largest three elements: 89 78 45

// largest 3, smallest 3, without largest 3, smallest 3 element
#include <bits/stdc++.h>
using namespace std;

int main() {
    int size = 7;

    int array[size] = {12, 45, 78, 23, 56, 89, 34};

    if (size < 3) {
        cerr << "Array size is less than 3. Cannot find the largest three elements.\n";
        return 1;
    }

    int firstLargest = INT_MIN;
    int secondLargest = INT_MIN;
    int thirdLargest = INT_MIN;

     for (int i = 0; i < size; ++i) {
        if (array[i] > firstLargest) {
            thirdLargest = secondLargest;
            secondLargest = firstLargest;
            firstLargest = array[i];
        } else if (array[i] > secondLargest && array[i] != firstLargest) {
            thirdLargest = secondLargest;
            secondLargest = array[i];
        } else if (array[i] > thirdLargest && array[i] != firstLargest && array[i] != secondLargest) {
            thirdLargest = array[i];
        }
    }

// Output the largest three elements
    cout << "Largest three elements: " << firstLargest << " " << secondLargest << " " << thirdLargest << "\n";
    return 0;
}



// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     const int size = 7;

//     int array[size] = {12, 45, 78, 23, 56, 89, 34};

//     if (size < 3) {
//         cerr << "Array size is less than 3. Cannot find the smallest three elements.\n";
//         return 1;
//     }

//     int firstSmallest = INT_MAX;
//     int secondSmallest = INT_MAX;
//     int thirdSmallest = INT_MAX;

//     for (int i = 0; i < size; ++i) {
//         if (array[i] < firstSmallest) {
//             thirdSmallest = secondSmallest;
//             secondSmallest = firstSmallest;
//             firstSmallest = array[i];
//         } else if (array[i] < secondSmallest) {
//             thirdSmallest = secondSmallest;
//             secondSmallest = array[i];
//         } else if (array[i] < thirdSmallest) {
//             thirdSmallest = array[i];
//         }
// //Output the values for each iteration
//         cout << "| " << i + 1 << " | " << array[i] << " | " << firstSmallest << " | " << secondSmallest << " | " << thirdSmallest << " |\n";
//     }

//     // Output the smallest three elements
//     cout << "Smallest three elements: " << firstSmallest << " " << secondSmallest << " " << thirdSmallest << "\n";

//     return 0;
// }




// #include <iostream>
// #include <algorithm>

// int main() {
//     const int size = 7;

//     int array[size] = {12, 45, 78, 23, 56, 89, 34};

//     if (size < 3) {
//         cerr << "Array size is less than 3. Cannot find the largest three elements.\n";
//         return 1;
//     }

//     // Sort the array in descending order
//     sort(array, array + size, greater<int>());

//     // Output the largest three elements
//     cout << "Largest three elements: " << array[0] << " " << array[1] << " " << array[2] << "\n";

//     return 0;
// }
