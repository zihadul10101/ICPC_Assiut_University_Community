#include <iostream>
using namespace std;

int main() {
    int size, num_elements;
    cin >> size >> num_elements;

    int input[size];
    int frequency[num_elements + 1] = {0}; // Initialize frequency array with 0

    // Reading input elements
    for (int i = 0; i < size; ++i) {
        cin >> input[i];
        // Increment frequency for the corresponding element
        frequency[input[i]]++;
    }

    // Print the frequency array
    for (int i = 1; i <= num_elements; ++i) {
        cout << frequency[i] << endl;
    }
    cout << endl;

    return 0;
}


// Input:
// size = 10
// num_elements = 5
// Sequence input (size elements):
// 1 2 3 4 5 3 2 1 5 3

// Execution Table:
// ----------------------------------------------------------------------------------------------------------------
// |   i   |   input[i]   |   frequency[]   |     Action
// ----------------------------------------------------------------------------------------------------------------
// |   -   |       -      |      0 0 0 0 0    |   Initialize variables and frequency array
// ----------------------------------------------------------------------------------------------------------------
// |   0   |       1      |      0 0 0 0 0    |   Read input[0] = 1
// |       |               |     1 0 0 0 0    |   Increment frequency[1]
// ----------------------------------------------------------------------------------------------------------------
// |   1   |       2      |      1 0 0 0 0    |   Read input[1] = 2
// |       |               |     1 1 0 0 0    |   Increment frequency[2]
// ----------------------------------------------------------------------------------------------------------------
// |   2   |       3      |      1 1 0 0 0    |   Read input[2] = 3
// |       |               |     1 1 1 0 0    |   Increment frequency[3]
// ----------------------------------------------------------------------------------------------------------------
// |   3   |       4      |      1 1 1 0 0    |   Read input[3] = 4
// |       |               |     1 1 1 1 0    |   Increment frequency[4]
// ----------------------------------------------------------------------------------------------------------------
// |   4   |       5      |      1 1 1 1 0    |   Read input[4] = 5
// |       |               |     1 1 1 1 1    |   Increment frequency[5]
// ----------------------------------------------------------------------------------------------------------------
// |   5   |       3      |      1 1 1 1 1    |   Read input[5] = 3
// |       |               |     1 1 2 1 1    |   Increment frequency[3]
// ----------------------------------------------------------------------------------------------------------------
// |   6   |       2      |      1 1 2 1 1    |   Read input[6] = 2
// |       |               |     1 2 2 1 1    |   Increment frequency[2]
// ----------------------------------------------------------------------------------------------------------------
// |   7   |       1      |      1 2 2 1 1    |   Read input[7] = 1
// |       |               |     2 2 2 1 1    |   Increment frequency[1]
// ----------------------------------------------------------------------------------------------------------------
// |   8   |       5      |      2 2 2 1 1    |   Read input[8] = 5
// |       |               |     2 2 2 1 2    |   Increment frequency[5]
// ----------------------------------------------------------------------------------------------------------------
// |   9   |       3      |      2 2 2 1 2    |   Read input[9] = 3
// |       |               |     2 2 3 1 2    |   Increment frequency[3]
// ----------------------------------------------------------------------------------------------------------------

// Frequency Array:
// 2 2 3 1 2