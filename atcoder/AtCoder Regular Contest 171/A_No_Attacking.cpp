#include<bits/stdc++.h>
using namespace std;

int main() {
    long long int testCase;
    cin >> testCase;

    while (testCase--) {
        long long int n, a, b;
        cin >> n >> a >> b;

        // Check if it's possible to place A rooks and B pawns satisfying the conditions
        if (a <= n && b <= n && a * b >= n && (a > 1 || b > 1)) {
            cout << "yes" << endl;
        } else {
            cout << "no" << endl;
        }
    }

    return 0;
}
