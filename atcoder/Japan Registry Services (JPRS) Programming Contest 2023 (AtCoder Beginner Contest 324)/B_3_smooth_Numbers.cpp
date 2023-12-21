#include <bits/stdc++.h>
using namespace std;
int main() {
    long long size;
    cin >> size;

    while (size % 2 == 0) {
        size /= 2;
    }

    while (size % 3 == 0) {
        size /= 3;
    }

    if (size == 1) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}


// | Iteration | N (Current Value) | N % 2 | N % 3 | Updated N |
// |-----------|-------------------|-------|-------|-----------|
// | 0         | 324               | 0     | 0     | 162       |
// | 1         | 162               | 0     | 0     | 81        |
// | 2         | 81                | 1     | 0     | 81        |
// | 3         | 81                | 0     | 27    | 3         |
// | 4         | 3                 | 1     | 0     | 3         |
// | 5         | 3                 | 0     | 1     | 1         |
// | 6         | 1                 | 1     | 1     | 1         |



// | Iteration | N (Current Value) | N % 2 | N % 3 | Updated N |
// |-----------|-------------------|-------|-------|-----------|
// | 0         | 32                | 0     | 2     | 16        |
// | 1         | 16                | 0     | 1     | 8         |
// | 2         | 8                 | 0     | 2     | 4         |
// | 3         | 4                 | 0     | 1     | 2         |
// | 4         | 2                 | 0     | 2     | 1         |
// | 5         | 1                 | 1     | 1     | 1         |

