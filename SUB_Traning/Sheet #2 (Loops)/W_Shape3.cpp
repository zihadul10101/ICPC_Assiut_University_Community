#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int row = 1; row <= n; row++) {
        // Print spaces
        for (int space = 1; space <= n - row; space++) {
            cout << " ";
        }
        
        // Print stars
        for (int star = 1; star <= 2 * row - 1; star++) {
            cout << "*";
        }
        
        // Move to the next line after each row
        cout << endl;
    }

    return 0;
}
