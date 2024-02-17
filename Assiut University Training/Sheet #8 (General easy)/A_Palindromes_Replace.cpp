#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;//a?z?
    cin >> s;

    int n = s.length();//4

    for (int i = 0; i < n / 2; ++i) {
        if (s[i] == '?' && s[n - i - 1] == '?') {//first and last char is '?' then replace a
            s[i] = s[n - i - 1] = 'a';
        } else if (s[i] == '?') {// first char is ? then first char = last char
            s[i] = s[n - i - 1];
        } else if (s[n - i - 1] == '?') {// last char is ? then last char = first char
            s[n - i - 1] = s[i];
        } else if (s[i] != s[n - i - 1]) {// first char != last char then -1
            cout << -1 << endl;
            return 0;
        }
    }
// extra char replace by a
   for (int i = 0; i < s.length(); ++i) {
    if (s[i] == '?')
        s[i] = 'a';
}


    cout << s << endl;

    return 0;
}
