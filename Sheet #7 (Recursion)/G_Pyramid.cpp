#include <iostream>
using namespace std;

void printSSStar(int n, int totalRows, int spaces) {
    if (n <= 0) {
        return;
    }
   printSSStar(n - 1, totalRows, spaces + 1);
    // Debug output: Print spaces
    for (int i = 0; i < spaces; i++) {
        cout << " ";
    }

    // Debug output: Print asterisks
    for (int i = 0; i < n * 2 - 1; i++) {
        cout << "*";
    }

    cout << endl;

    // Recursively call for the next row
 
}

int main() {
    int rows;
  //  cout << "Enter the number of rows: ";
    cin >> rows;

    //cout << "Debug Output:" << endl;
    printSSStar(rows, rows, 0);

    return 0;
}
