#include<bits/stdc++.h>
using namespace std;

int reverseNumber(int n) {
    int reversed = 0;
    while (n > 0) {
        int digit = n % 10;
        reversed = reversed * 10 + digit;
        n /= 10;
    }
    return reversed;
}

bool isPalindrome(int n) {
    return n == reverseNumber(n);
}

int main() {
  long long  int N;
    cin >> N;

    int reversedN = reverseNumber(N);

    cout << reversedN << endl;

    if (isPalindrome(N)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
