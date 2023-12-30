#include <iostream>

// Function to find the GCD using the Euclidean algorithm
int findGCD(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    // Example with numbers 2 and 3
    int num1 = 2;
    int num2 = 3;

    // Call the function to find the GCD
    int gcd = findGCD(num1, num2);

    // Output the result
    std::cout << "The GCD of " << num1 << " and " << num2 << " is: " << gcd << std::endl;

    return 0;
}
