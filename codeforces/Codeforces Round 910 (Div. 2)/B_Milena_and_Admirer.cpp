// array decreasing
#include <bits/stdc++.h>
using namespace std;

// Function to find the
// minimum steps required
void minSteps(int arr[], int N)
{
	vector<int> arr1;
	int size = N;

	// For count of greater element
	int count;

	// For storing answer
	int ans = 0;

	while (true) {
		count = 0;
		arr1.push_back(arr[0]);
		for (int i = 1; i < size; i++) {
			// If elements is not greater than element on
			// its left then add that element into arr1
			if (arr[i] <= arr[i - 1]) {
				arr1.push_back(arr[i]);
			}
			// else increment the count because we got a
			// greater element
			else {
				count++;
			}
		}

		// If there is no greater element then out from the
		// outer loop
		if (count == 0) {
			break;
		}

		// Copy all the elements of arr1 to the initial
		// array
		size = arr1.size();
		for (int i = 0; i < size; i++) {
			arr[i] = arr1[i];
		}
		arr1.clear();
		ans++;
	}

	cout << ans << endl;
}
// Driver Code
int main()
{
    int testCase, n;
    cin >> testCase;
    for (int i = 0; i < testCase; i++) {
        cin >> n;
        int arr[n];
        for (int j = 0; j < n; j++) {
            cin >> arr[j];
        }
        minSteps(arr, n);
    }
    return 0;
}
