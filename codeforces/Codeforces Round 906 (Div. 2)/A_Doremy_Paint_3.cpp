#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t; // Number of test cases

    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        // Calculate the sum of the first two elements
        int sum = a[0] + a[1];
        bool isGood = true;

        // Check if the sum is equal for all adjacent pairs
        for (int i = 1; i < n - 1; i++) {
            if (a[i] + a[i + 1] != sum) {
                isGood = false;
                break;
            }
        }

        if (isGood) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }

    return 0;
}
