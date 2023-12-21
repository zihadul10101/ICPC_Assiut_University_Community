#include<bits/stdc++.h>

using namespace std;

int display(int A[], int N) {
    int count = 0;

    for (int i = 0; i < N; i++) {
        for (int j = i; j < N; j++) {
            bool isBeautiful = true;
            int prev = A[i];

            for (int k = i; k <= j; k++) {
                if (A[k] != prev) {
                    isBeautiful = false;
                    break;
                }
            }

            if (!isBeautiful) {
                count++;
            }
        }
    }

    return count;
}

int main() {
    int T;
    cin >> T;

    for (int t = 1; t <= T; t++) {
        int N;
        cin >> N;
        int A[N];

        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }

        int result = display(A, N);
        cout << "Case " << t << ": " << result << endl;
    }

    return 0;
}
