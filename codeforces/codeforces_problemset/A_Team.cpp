
// input 3
// 1 1 0  // 1
// 1 1 1  // 1
// 1 0 0  //
//
// output 1+ 1
// 2

#include <bits/stdc++.h>
using namespace std;

int main() {
    int testCase;
    cin >> testCase;
    int totalFlags = 0; // Variable to keep track of total flags across all test cases

    while (testCase--) {
        int a, b, c, flag = 0;
        cin >> a >> b >> c;
        
        if (a + b + c >= 2) {
            flag++;
        }
        
        totalFlags += flag; // Update the total flags
    }
    
    cout << totalFlags << endl; // Output the total number of flags
    return 0;
}

