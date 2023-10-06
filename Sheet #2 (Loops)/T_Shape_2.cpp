#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for (int i = 0; i < n; i++) {
        // Print spaces before the asterisks
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }
        
        // Print asterisks
        for (int k = 0; k < 2 * i + 1; k++) {
            cout << "*";
        }
        
        // Move to the next line
        cout << endl;
    }
  
}

// | Iteration (i) | Spaces | Asterisks | Output        |
// |---------------|--------|-----------|---------------|
// | 0             | 3      | 1 (*)     | "   *         |
// | 1             | 2      | 3 (***)   | "  ***        |
// | 2             | 1      | 5 (*****) | " *****       |
// | 3             | 0      | 7 (*******| "*******      |
