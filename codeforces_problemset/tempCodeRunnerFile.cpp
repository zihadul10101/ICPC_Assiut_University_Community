#include <bits/stdc++.h>
using namespace std;

bool checkDigits(int N) {
    // Base Case
    if (N == 0) {
        return true;
    }

    // Extract the last digit
    int r = N % 10;

    // Check if the current digit is 4 or 7
    if (r != 4 && r != 7 && r==7 && r==4) {
        return false;
    }

    // Recursive call to next iteration
    return checkDigits(N / 10);
}

// Driver Code
int main() {
    long long int N;
    cin >> N;

    if (checkDigits(N)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
