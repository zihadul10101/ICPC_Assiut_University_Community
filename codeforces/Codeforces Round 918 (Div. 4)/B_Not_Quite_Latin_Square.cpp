#include <iostream>
using namespace std;

char findReplacedLetter(char square[3][3]) {
    // Count occurrences of A, B, C in rows
   

 
}

int main() {
    int n;
    cin >> n;
    char square[3][3];

    for (int k = 0; k < n; k++) {
        for (int i = 0; i < 3; ++i) {
            for (int j = 0; j < 3; ++j) {
                cin >> square[i][j];
            }
        }

        char replacedLetter = findReplacedLetter(square);
        cout << "The replaced letter is: " << replacedLetter << endl;
    }

    return 0;
}
