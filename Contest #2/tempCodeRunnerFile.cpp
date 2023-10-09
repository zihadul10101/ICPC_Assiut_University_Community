#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int T;
    cin >> T; // Number of test cases

    while (T--) {
      long long  L, R;
        cin >> L >> R;

       long long minVal = min(L, R);
        long long maxVal = max(L, R);

        long long sum = (minVal + maxVal) * (maxVal - minVal + 1) / 2;
        cout << sum << endl;
    }

    return 0;
}
