#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int n, k;
    cin >> n >> k;

   int A[n];
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    // Sort array in descending order
    sort(A, A + n, greater< int>());

    long long int result = 0;
    for (int i = 0; i < n - 1; i++) {
        long long int a= (A[i+1]-A[i])+k;
        result+=a;
    }

    cout << result << endl;
    // cout << (1-2)+4+(0-1)+4 << endl;
    return 0;
}
