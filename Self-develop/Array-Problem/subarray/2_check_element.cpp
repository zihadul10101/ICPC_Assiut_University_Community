// // Check if subarray with given product exists in an array
// #include <iostream>

// using namespace std;

// bool subarrayWithGivenProductExists(int arr[], int n, int K) {
//     // -2, -1, 3, -4, 5   n=5  k=2
//     int start = 0, end = 0;
//     int product = 1;

//     while (end < n) { // 0<5
//         product *= arr[end]; 1*=-2 ==-2

//         while (start <= end && product >= K) {//0<=0 && 2>=2
//             if (product == K) {
//                 return true;
//             }
//             product /= arr[start];
//             start++;
//         }

//         end++;
//     }

//     return false;
// }

// int main() {
//     int arr1[] = {-2, -1, 3, -4, 5};
//     int n1 = sizeof(arr1) / sizeof(arr1[0]);
//     int K1 = 2;
//     cout << (subarrayWithGivenProductExists(arr1, n1, K1) ? "YES" : "NO") << endl;

//     int arr2[] = {3, -1, -1, -1, 5};
//     int n2 = sizeof(arr2) / sizeof(arr2[0]);
//     int K2 = 9;
//     cout << (subarrayWithGivenProductExists(arr2, n2, K2) ? "YES" : "NO") << endl;

//     return 0;
// }


// CPP program to check if there is
// any Subarray with product equal to K
#include <bits/stdc++.h>
using namespace std;

// Function to find maximum product subarray
bool maxProduct(int* arr, int n, int p)
{
	// Variables to store maximum and minimum
	// product till ith index.
	int minVal = arr[0];
	int maxVal = arr[0];
	int maxProduct = arr[0];

	for (int i = 1; i < n; i++) {

		// When multiplied by -ve number,
		// maxVal becomes minVal
		// and minVal becomes maxVal.
		if (arr[i] < 0)
			swap(maxVal, minVal);

		// maxVal and minVal stores the
		// product of subarray ending at arr[i].
		maxVal = max(arr[i], maxVal * arr[i]);
		minVal = min(arr[i], minVal * arr[i]);

		// Check if the current product is
		// equal to the given product
		if (minVal == p || maxVal == p) {
			return true;
		}

		// Max Product of array.
		maxProduct = max(maxProduct, maxVal);
	}

	// Return maximum product found in array.
	return false;
}

// Driver Program to test above function
int main()
{
	int arr[] = { 1, 2, -5, -4 };
	int product = -10;
	int n = sizeof(arr) / sizeof(arr[0]);

	if (maxProduct(arr, n, product)) {
		cout << "YES" << endl;
	}
	else
		cout << "NO" << endl;

	return 0;
}

