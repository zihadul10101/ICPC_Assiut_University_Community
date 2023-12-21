#include<bits/stdc++.h>
using namespace std;

int main() {
    int num1, num2, num3, num4;
    cin >> num1 >> num2 >> num3 >> num4;

    // Calculate the last 2 digits of each number
    int newNum1 = num1 % 100; // Last 2 digits of num1
    int newNum2 = num2 % 100; // Last 2 digits of num2
    int newNum3 = num3 % 100; // Last 2 digits of num3
    int newNum4 = num4 % 100; // Last 2 digits of num4

    // Calculate the product of last 2 digits
    int result = (newNum1 * newNum2 * newNum3 * newNum4);

    // Check if the result is less than or equal to 9
    if (result % 100 <= 9) {
        cout << "0" << result % 100 << endl; // Print with leading zero
    } else {
        cout << result % 100 << endl; // Print without leading zero
    }

    return 0;
}
// Now, let's use the sample input 5 7 2 4 and go through each step:

// Step	Variable Values	Comments
// Input	5 7 2 4	User enters these values
// newNum1 = num1 % 100	newNum1 = 5 % 100 = 5	Last 2 digits of num1
// newNum2 = num2 % 100	newNum2 = 7 % 100 = 7	Last 2 digits of num2
// newNum3 = num3 % 100	newNum3 = 2 % 100 = 2	Last 2 digits of num3
// newNum4 = num4 % 100	newNum4 = 4 % 100 = 4	Last 2 digits of num4
// result = ...	result = 5 * 7 * 2 * 4 = 280	Calculation of the product of last 2 digits
// if ...	if (280 % 100 <= 9)	Check if the last 2 digits of result are <= 9
// Output	cout << "0" << 80 << endl;	Leading zero is added to 80 and printed
// So, the program correctly calculates and prints the last 2 digits of the multiplication of 5 7 2 4, which is 80.