#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    // Print the top half of the diamond
      for (int row= 1; row<= n; row++) {
         for (int col= 1; col<= n - row; col++) {
          cout << " ";
        }
        // Print stars
        for (int k = 1; k <= 2 * row- 1; k++) {
          cout << "*";
        }
          cout << endl;
      }

       // Print the bottom half of the diamond
    for (int row= n - 1; row>= 1; row--) {
        // Print spaces
        for (int col= 1; col<= n - row; col++) {
            cout << " ";
        }
        
        // Print stars
        for (int k = 1; k <= 2 * row- 1; k++) {
            cout << "*";
        }
        
        cout << endl;
    }
}


// ----------------------------------------------------
// |     row     |       col (leading spaces)       |    *
// ----------------------------------------------------
// |      1      |             4                     |    1
// |      2      |           3 3                    |    3
// |      3      |          2 2 2                   |    5
// |      4      |         1 1 1 1                  |    7
// |      5      |        0 0 0 0 0                 |    9
// |      4      |         1 1 1 1                  |    7
// |      3      |          2 2 2                   |    5
// |      2      |           3 3                    |    3
// |      1      |             4                     |    1
// ----------------------------------------------------
