// #include <iostream>

// using namespace std;

// int main() {
//     long long T;
//     cin >> T; // Number of test cases

//     while (T--) {
//         long long L, R;
//         cin >> L >> R;

//         long long sum = 0;
//         for (int i = L; i <= R; ++i) {
//             sum += i;
//         }

//         cout << sum << endl;
//     }

//     return 0;
// }


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
   // n*(n+1)/2
   // 3 6
   //(3+6)*(6-3+1)=9*4=36/2=18

        long long sum = (minVal + maxVal) * (maxVal - minVal + 1) / 2;
        cout << sum << endl;
    }

    return 0;
}
