#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int n, k;
    cin >> n >> k;

    long long int A[n];
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    // Sort array in descending order
    sort(A, A + n, greater<long long int>());

    long long int result = 0;
    for (int i = 0; i < n - 1; i++) {
        result += (A[i] - A[i + 1] + k) % k;
    }

    cout << result << endl;
    return 0;
}
