#include <iostream>

using namespace std;

int sumOfDigits(int number) {
    // Function to calculate the sum of digits of a number
    int digitSum = 0;
    while (number > 0) {
        digitSum += number % 10;
        number /= 10;
    }
    return digitSum;
}

int main() {
    int N, A, B;
    cin >> N >> A >> B;

    int total = 0;

    for (int i = 1; i <= N; i++) {
        int digitSum = sumOfDigits(i);
        if (digitSum >= A && digitSum <= B) {
            total += i;
        }
    }

    cout << total << endl;

    return 0;
}



// | i    | Number | Digit Sum | Include in Sum | Total Sum | 
// |------|--------|-----------|----------------|-----------|
// | 1    | 1      | 1         | No             | 0         |
// | 2    | 2      | 2         | Yes            | 2         |
// | 3    | 3      | 3         | Yes            | 5         |
// | 4    | 4      | 4         | Yes            | 9         |
// | 5    | 5      | 5         | Yes            | 14        |
// | 6    | 6      | 6         | No             | 14        |
// | 7    | 7      | 7         | No             | 14        |
// | 8    | 8      | 8         | No             | 14        |
// | 9    | 9      | 9         | No             | 14        |
// | 10   | 10     | 1         | No             | 14        |
// | 11   | 11     | 2         | Yes            | 25        |
// | 12   | 12     | 3         | Yes            | 37        |
// | 13   | 13     | 4         | Yes            | 50        |
// | 14   | 14     | 5         | Yes            | 64        |
// | 15   | 15     | 6         | No             | 64        |
// | 16   | 16     | 7         | No             | 64        |
// | 17   | 17     | 8         | No             | 64        |
// | 18   | 18     | 9         | No             | 64        |
// | 19   | 19     | 10        | No             | 64        |
// | 20   | 20     | 2         | Yes            | 84        |

