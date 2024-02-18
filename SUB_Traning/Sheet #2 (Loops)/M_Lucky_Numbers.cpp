#include<bits/stdc++.h>
using namespace std;

bool is_lucky(int num) {
    while (num > 0) {
        int digit = num % 10;
        if (digit != 4 && digit != 7) {
            return false;
        }
        num /= 10;
    }
    return true;
}

int main() {
    long long int n1, n2;
    cin >> n1 >> n2;
    bool found = false;
    for (int i = n1; i <= n2; i++) {
        if (is_lucky(i)) {
            cout << i << " ";
            found = true;
        }
    }
    if (!found) {
        cout << "-1" << endl;
    }
    return 0;
}
