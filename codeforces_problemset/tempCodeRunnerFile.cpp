// Function to check if a number has distinct digits
bool hasDistinctDigits(int num) {
    bool digitUsed[10] = {false};

    while (num > 0) {
        int digit = num % 10;
        if (digitUsed[digit]) {
            return false;
        }
        digitUsed[digit] = true;
        num /= 10;
    }

    return true;
}

// Function to find the next number with distinct digits
void nextNumberDistinctDigit(int n) {
    while (!hasDistinctDigits(++n))
        ;

    cout << n << endl;
}