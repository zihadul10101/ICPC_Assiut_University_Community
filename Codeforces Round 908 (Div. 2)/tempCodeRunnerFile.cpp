#include <iostream>
#include <string>
using namespace std;

int main() {
    int t; // Number of test cases
    cin >> t;

    while (t--) {
        int n; // Number of plays
        cin >> n;

        string plays; // A string containing the results of plays
        cin >> plays;

        int a_wins = 0; // Counter for player A's wins
        int b_wins = 0; // Counter for player B's wins
        int a_sets = 0; // Counter for player A's sets won
        int b_sets = 0; // Counter for player B's sets won

        char result = '?'; // Initialize the result as unknown

        for (int i = 0; i < n; i++) {
            if (plays[i] == 'A') {
                a_wins++;
            } else {
                b_wins++;
            }

            if (a_wins >= b_wins + 1 && a_wins >= 2) {
                a_sets++;
                a_wins = 0;
                b_wins = 0;
            } else if (b_wins >= a_wins + 1 && b_wins >= 2) {
                b_sets++;
                a_wins = 0;
                b_wins = 0;
            }

            if (a_sets >= b_sets + 1 && a_sets >= 2) {
                result = 'A';
                break;
            } else if (b_sets >= a_sets + 1 && b_sets >= 2) {
                result = 'B';
                break;
            }
        }

        cout << result << endl;
    }

    return 0;
}
