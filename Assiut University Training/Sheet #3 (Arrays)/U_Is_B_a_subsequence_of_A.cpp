#include<bits/stdc++.h>
using namespace std;

int main() {
      int sizeA, sizeB;
      cin >> sizeA >> sizeB;
    int arr1[sizeA];
    int arr2[sizeB];
    for(int i=0;i<sizeA;i++){
        cin>>arr1[i];
    }
     for(int i=0;i<sizeB;i++){
        cin>>arr2[i];
    }
      int i = 0, j = 0;
    while (i < sizeA && j < sizeB) {
        if (arr1[i] == arr2[j]) {
            j++;
        }
        i++;
    //        cout<<"j"<<"="<<j<<endl;
    // cout<<"i"<<"="<<i<<endl;
    }
 
     if (j == sizeB) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}

// ------------------------------------------------------------------
// |   i   |   j   |   A[i]   |   B[j]   |   Action
// ------------------------------------------------------------------
// |   -   |   -   |    -     |    -     |   Initialize variables
// ------------------------------------------------------------------
// |   0   |   0   |    1     |    1     |   A[0] == B[0], increment j
// |   1   |   1   |    4     |    7     |   A[1] != B[1], continue
// |   2   |   1   |    7     |    7     |   A[2] == B[1], increment j
// |   3   |   2   |    -     |    -     |   End of loop
// ------------------------------------------------------------------
// i and j are initialized to 0.
// The code iterates through the arrays A and B.
// At i = 0, A[0] is equal to B[0], so j is incremented to 1.
// At i = 1, A[1] is not equal to B[1], so j remains at 1.
// At i = 2, A[2] is equal to B[1], so j is incremented to 2.
// Finally, the loop ends because either i or j reached the array size limit.
// Result:

// Since j is equal to the size of array B (2), it means that all elements of B were found in the same order in A. Therefore, the code prints "YES" as expected.
