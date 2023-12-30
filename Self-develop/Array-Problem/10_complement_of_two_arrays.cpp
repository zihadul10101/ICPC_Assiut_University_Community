// input :
//    int size1 = 5;
//    int size2 = 4;

// int array1[size1] = {1, 2, 3, 4, 5};
// int array2[size2] = {3, 4, 5, 6};
// output:
// Complement of array1 with respect to array2: 1 2
// Complement of array2 with respect to array1: 6




#include <bits/stdc++.h>
using namespace std;

int main() {
    int size1 = 5;
       int size2 = 4;

    int array1[size1] = {1, 2, 5, 4, 3};
    int array2[size2] = {6, 4, 5, 3};

      cout << "Complement of array1 with respect to array2: ";
    for (int i = 0; i < size1; ++i) {
        bool foundInArray2 = false;
        for (int j = 0; j < size2; ++j) {
            if (array1[i] == array2[j]) {
                foundInArray2 = true;
                break;
            }
        }
        if (!foundInArray2) {
            cout << array1[i] << " ";
        }
    }


      cout << "\nComplement of array2 with respect to array1: ";
    for (int i = 0; i < size2; ++i) {
        bool foundInArray1 = false;
        for (int j = 0; j < size1; ++j) {
            if (array2[i] == array1[j]) {
                foundInArray1 = true;
                break;
            }
        }
        if (!foundInArray1) {
            cout << array2[i] << " ";
        }
    }

    return 0;
}