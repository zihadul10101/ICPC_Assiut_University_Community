#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, sum = 0, mIn;
    cin >> n;
    int arr[2 * n];
    for (int i = 0; i < 2 * n; i++) {
        cin >> arr[i];
    }
    sort(arr, arr + 2 * n); 

    for (int i = 0; i < 2 * n; i += 2) { 
        mIn = min(arr[i], arr[i + 1]); 
        sum += mIn; 
    }
    cout << sum << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
