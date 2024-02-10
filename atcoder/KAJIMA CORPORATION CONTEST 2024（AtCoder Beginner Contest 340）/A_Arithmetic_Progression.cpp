// #include <bits/stdc++.h>
// using namespace std;

// float solve(int a, int d, int n) {
//     float seq = 0;
//     for (int i = 0; i < n; i++) {
//         seq += a;
//         a += d;
//     }
//     return seq;
// }

// int main() {
//     int a, b, d;
//     cin >> a >> b >> d;
//     int up = (b - a);
//     int n = up / d + 1;
//     float sum = solve(a, d, n);
//     cout << "Sum of the arithmetic progression: " << sum << endl;
//     return 0;
// }
#include <iostream>
using namespace std;

void printSequence(int a, int b, int d) {
    for (int i = a; i <= b; i += d) {
        cout << i << " ";
    }
    cout << endl;
}

int main() {
    int a, b, d;
    cin >> a >> b >> d;
    printSequence(a, b, d);
    return 0;
}
