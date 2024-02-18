#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int first = s.length();
    int sum = 0;
    for (int i = 0; i < first; i++) {
        sum = sum + (s[i] - '0');  // Cast s[i] to int before adding
    }
    cout << sum << endl;

    return 0;
}

// In C++, characters are represented as ASCII values.
// The ASCII value of the character '0' is 48, '1' is 49, '2' is 50, and so on.
//  When you subtract the ASCII value of '0' from the ASCII value of a digit character, you get the actual numerical value of that digit.

// For example:

// If s[i] is '0', then s[i] - '0' is equal to 48 - 48, which is 0.
// If s[i] is '1', then s[i] - '0' is equal to 49 - 48, which is 1.
// If s[i] is '2', then s[i] - '0' is equal to 50 - 48, which is 2.
// And so on.
// So, by subtracting the ASCII value of '0' from the ASCII value of a digit character,
//  you convert the character representation of a digit to its actual numerical value.
// This is a common technique used to convert characters representing digits to their integer values