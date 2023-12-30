// input
// const int size1 = 5;
// const int size2 = 4;

// int array1[size1] = {1, 2, 3, 4, 5};
// int array2[size2] = {3, 4, 5, 6};

// output 
// Union of the arrays: 1 2 3 4 5 6

// const int size1 = 6;
// const int size2 = 3;

// int array1[size1] = {2, 4, 6, 8, 10, 12};
// int array2[size2] = {3, 6, 9};
//  output
//  Union of the arrays: 2 4 6 8 10 12 3 9


#include <bits/stdc++.h>
using namespace std;

int main() {
       const int size1 = 5;
       const int size2 = 4;

    int array1[size1] = {1,5,3,4,2};
    int array2[size2] = {3, 4, 5, 6};
     // Assuming the maximum size of the union is the sum of the sizes of both arrays
    const int maxSize = size1 + size2;
    int unionArray[maxSize];
    int unionSize = 0;
    // sort(array1,array1+size1);
    // sort(array2,array2+size2);
     // Copy elements from the first array to the union array
    for (int i = 0; i < size1; ++i) {
        unionArray[unionSize++] = array1[i];
    }
    
    // Check and copy unique elements from the second array to the union array
    for (int i = 0; i < size2; ++i) {
        bool isDuplicate = false;
        for (int j = 0; j < unionSize; ++j) {
            if (array2[i] == unionArray[j]) {
                isDuplicate = true;
                break;
            }
        }
        if (!isDuplicate) {
            unionArray[unionSize++] = array2[i];
        }
    }

      // Print the union
    cout << "Union of the arrays: ";
    for (int i = 0; i < unionSize; i++) {
        cout << unionArray[i] << " ";
    }
    return 0;
}

