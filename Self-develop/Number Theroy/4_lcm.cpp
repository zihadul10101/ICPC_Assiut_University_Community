#include<bits/stdc++.h>
using namespace std;

// To find the least common multiple (LCM) of 12 and 18, you can use the prime factorization method.
// Prime factorize each number:
// 12 = 2^2 * 3
// 18 = 2 * 3^2
// Identify the highest power of each prime factor:
// The highest power of 2 is 2^2.
// The highest power of 3 is 3^2.
// Multiply these highest powers together:
// LCM(12, 18) = 2^2 * 3^2 = 4 * 9 = 36

// So, the LCM of 12 and 18 is 36. in cpp
int lcm(int a, int b) {
    // Find prime factorization of each number
    int num1 = a, num2 = b;
    int lcm = 1;

    // Find prime factors for num1
    for (int i = 2; i <= num1; i++) {
        while (num1 % i == 0 && num2 % i == 0) {
            lcm *= i;
            num1 /= i;
            num2 /= i;
        }
    }

    // Multiply remaining factors
    lcm *= num1 * num2;

    return lcm;
}

int main() {
    int num1 = 12;
    int num2 = 18;
    int result = lcm(num1, num2);

    cout << "LCM of " << num1 << " and " << num2 << " is: " << result << endl;

    return 0;
}
