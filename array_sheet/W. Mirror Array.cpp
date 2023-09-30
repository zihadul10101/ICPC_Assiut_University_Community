#include <iostream>
using namespace std;

int main() {
    int size, num_elements;
    cin >> size >> num_elements;

    int input[size][num_elements];
    int mirror[size][num_elements];

    // Reading input elements
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < num_elements; ++j) {
            cin >> input[i][j];
        }
    }

    // Creating the mirror array
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < num_elements; ++j) {
            mirror[i][j] = input[i][num_elements - 1 - j];
            //    mirror[i][j] = input[size - 1 - i][j];
        }

    }

    // Printing the mirror array
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < num_elements; ++j) {
            cout << mirror[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
// ---------------------------------------------------------------------------------
// |   i   |   j   |   input[i][j]   |   mirror[i][j]   |   Action
// ---------------------------------------------------------------------------------
// |   -   |   -   |       -         |        -         |   Initialize variables
// ---------------------------------------------------------------------------------
// |   0   |   0   |        2        |         5        |   mirror[0][0] = input[0][2]
// |   0   |   1   |        3        |         3        |   mirror[0][1] = input[0][1]
// |   0   |   2   |        5        |         2        |   mirror[0][2] = input[0][0]
// ---------------------------------------------------------------------------------
// |   1   |   0   |        7        |        20        |   mirror[1][0] = input[1][2]
// |   1   |   1   |        9        |         9        |   mirror[1][1] = input[1][1]
// |   1   |   2   |       20        |         7        |   mirror[1][2] = input[1][0]
// ---------------------------------------------------------------------------------
// |   2   |   0   |       35        |        12        |   mirror[2][0] = input[2][2]
// |   2   |   1   |        1        |         1        |   mirror[2][1] = input[2][1]
// |   2   |   2   |       12        |        35        |   mirror[2][2] = input[2][0]
// ---------------------------------------------------------------------------------
