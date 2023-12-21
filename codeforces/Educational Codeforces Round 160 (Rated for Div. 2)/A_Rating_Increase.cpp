#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        string st;
        cin >> st;

        // Flag to check if valid values are found
        bool valid_values_found = false;

        // Extract two substrings a and b
        for (int len_a = 1; len_a < st.length(); len_a++) {
            string a = st.substr(0, len_a);
            string b = st.substr(len_a);

            // Check conditions
            if (a[0] != '0' && b[0] != '0' && stoi(b) > stoi(a)) {
                cout << a << " " << b << endl;
                valid_values_found = true;
                break; // Stop searching for other combinations
            }
        }

        // If no valid values found, print -1
        if (!valid_values_found) {
            cout << -1 << endl;
        }
    }

    return 0;
}

