#include <iostream>

// Function to calculate the nth Fibonacci number
unsigned long long fibonacci(int n) {
    if (n <= 0) return 0;
    if (n == 1) return 1;
    unsigned long long a = 0, b = 1, c;
    for (int i = 2; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}

int main() {
    unsigned long long date; // Date (day of the month)
    std::cout << "Enter a date (day of the month): ";
    std::cin >> date;

    int n = 0;
    while (fibonacci(n) < date) {
        n++;
    }

    if (fibonacci(n) == date) {
        std::cout << "Fibonacci Day! " << date << " is the " << n << "th Fibonacci number." << std::endl;
    } else {
        std::cout << date << " is not a Fibonacci Day." << std::endl;
    }

    return 0;
}
