// input
//  int size1 = 5;
//  int size2 = 4;

// int array1[size1] = {1, 2, 3, 4, 5};
// int array2[size2] = {3, 4, 5, 6};
// output
// Intersection of the arrays: 3 4 5
#include <bits/stdc++.h>
using namespace std;

int main() {
     int size1 = 5;
     int size2 = 4;

    int array1[size1] = {1, 2, 3, 4, 5};
    int array2[size2] = {3, 4, 5, 6};

  cout << "Intersection of the arrays: ";

    for (int i = 0; i < size1; ++i) {
        for (int j = 0; j < size2; ++j) {
            if (array1[i] == array2[j]) {
                 cout << array1[i] << " ";
                break;  // Move to the next element in array1
            }
        }
    }
    return 0;
}