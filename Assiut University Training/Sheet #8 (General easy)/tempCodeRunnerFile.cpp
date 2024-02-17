#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;//a?z?
    cin >> s;

    int n = s.length();//4

    for (int i = 0; i < n / 2; ++i) {
        if (s[i] == '?' && s[n - i - 1] == '?') {//first and last digit is '?' then replace a
            s[i] = s[n - i - 1] = 'a';
        } else if (s[i] == '?') {// first digit is ? then first digit = last digit
            s[i] = s[n - i - 1];
        } else if (s[n - i - 1] == '?') {// last digit is ? then last digit = first digit
            s[n - i - 1] = s[i];
        } else if (s[i] != s[n - i - 1]) {// first digit != last digit then -1
            cout << -1 << endl;
            return 0;
        }
    }

    for (char &c : s) {
        if (c == '?')
            c = 'a';
    }

    cout << s << endl;

    return 0;
}
