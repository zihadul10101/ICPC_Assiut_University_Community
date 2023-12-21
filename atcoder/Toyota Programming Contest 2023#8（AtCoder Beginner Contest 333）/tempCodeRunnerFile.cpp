#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;  // You need to read the value of 'n' before using it in the loop
    int a, b;

    for (int i = 0; i < n; i++) {
        cin >> a >> b;
        
        if (a == b) {
            cout << a;
        } else if (a > b) {
            cout << a;
        } else if (a < b) {
            cout << b;
        }

        cout << endl;  // Add a newline for better readability
    }

    return 0;
}
