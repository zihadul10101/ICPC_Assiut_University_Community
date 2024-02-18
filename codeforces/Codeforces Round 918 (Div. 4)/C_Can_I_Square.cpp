#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main() {
    long long int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        long long int size;
        cin >> size;

        long long int arr[size];
        long long int sum = 0;

        for (int j = 0; j < size; j++) {
            cin >> arr[j];
            sum += arr[j];
        }

        double squareRoot = sqrt(sum);
      //cout <<int(squareRoot) << endl;
        // Check if the square root is an integer
        if (squareRoot == int(squareRoot)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
