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