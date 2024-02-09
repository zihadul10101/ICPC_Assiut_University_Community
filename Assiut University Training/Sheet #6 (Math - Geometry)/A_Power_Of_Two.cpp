#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int n;
    cin >> n;

     // A power of two has only one bit set in its binary representation.
    // For example: 2 = 10 (binary), 4 = 100 (binary), 8 = 1000 (binary), etc.
    // So, if we subtract 1 from a power of two, we get a number with all bits set to 1.
    // For example: 2 - 1 = 1 (binary: 01), 4 - 1 = 3 (binary: 011), 8 - 1 = 7 (binary: 0111), etc.
    // Performing bitwise AND operation on a power of two and its predecessor would yield 0.
    // For example: (2 & 1) = 0, (4 & 3) = 0, (8 & 7) = 0, etc.
    // So, if the result is 0, then the number is a power of two
    bool isPowerOfTwo = (n != 0) && ((n & (n - 1)) == 0); // 8 !=0 && (8 && (8-1)==0)

    if (isPowerOfTwo) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}