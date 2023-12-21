#include <bits/stdc++.h>
using namespace std;
const int MAX_SIZE = 100;

void addMatrices(int R, int C) {// 2 3
 if (R == 0) {
        return;
    }
    
    int A[MAX_SIZE][MAX_SIZE];
    int B[MAX_SIZE][MAX_SIZE];

      // Input matrix A
      // 1 2 3   
      // 4 5 6 
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            cin >> A[i][j];
        }
    }

    // Input matrix B
   // 1 3 5   
   // 7 9 11 
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            cin >> B[i][j];
        }
    }

     for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            cout << A[i][j] + B[i][j];
            if (j < C - 1) {
                cout << " ";
            }
        }
        cout << endl;
    }
    addMatrices(R - 1, C); // Recursively process the next row
}
int main(){
     int R, C;
    cin >> R >> C;

    addMatrices(R, C); // 2 3
}