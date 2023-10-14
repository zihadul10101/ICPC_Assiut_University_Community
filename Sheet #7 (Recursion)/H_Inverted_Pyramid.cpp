#include <iostream>
using namespace std;

void printAsterisks(int n, int totalRows, int spaces) {
    if (n <= 0) {
        return;
    }
  
    // Debug output: Print spaces
    for (int i = 0; i < spaces; i++) {
        cout << " ";
    }

    // Debug output: Print asterisks
    for (int i = 0; i < n * 2 - 1; i++) {
        cout << "*";
    }

    cout << endl;
 printAsterisks(n - 1, totalRows, spaces + 1);
    // Recursively call for the next row
 
}

int main() {
    int rows;
  //  cout << "Enter the number of rows: ";
    cin >> rows;

    //cout << "Debug Output:" << endl;
    printAsterisks(rows, rows, 0);

    return 0;
}
