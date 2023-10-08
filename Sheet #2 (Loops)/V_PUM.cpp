#include<bits/stdc++.h>
using namespace std;
int main()
{

int counter;
cin>>counter;
int start = 1; // Starting number

    for (int i = 0; i < counter; i++) {
        for (int j = 0; j < 3; j++) {
           cout << start++ << " ";
        }
       cout << "PUM" <<endl;
        start++; // Skip the number that comes after "PUM"
    }

}

// Row 0, Column 0: 1 Row 0, Column 1: 2 Row 0, Column 2: 3 PUM
// Row 1, Column 0: 5 Row 1, Column 1: 6 Row 1, Column 2: 7 PUM
// Row 2, Column 0: 9 Row 2, Column 1: 10 Row 2, Column 2: 11 PUM
// Row 3, Column 0: 13 Row 3, Column 1: 14 Row 3, Column 2: 15 PUM
// Row 4, Column 0: 17 Row 4, Column 1: 18 Row 4, Column 2: 19 PUM
// Row 5, Column 0: 21 Row 5, Column 1: 22 Row 5, Column 2: 23 PUM
// Row 6, Column 0: 25 Row 6, Column 1: 26 Row 6, Column 2: 27 PUM
