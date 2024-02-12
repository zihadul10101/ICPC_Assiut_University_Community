#include <bits/stdc++.h>
using namespace std;
void deleteElement(int LA[], int& N, int K) {
    int ITEM = LA[K]; // Step 1: Set ITEM = LA[K]

    // Step 2: Move elements upward from index K+1 to N-1
    for (int J = K; J < N - 1; ++J) {
        LA[J] = LA[J + 1];
    }
    
    // Step 3: Reset the number 'N' of LA
    N = N - 1;

    // Step 4: Exit
}

int main()
{
    int linnerArray[] = {1, 2, 3, 4, 5};//0 1 2 3 4
    int size = sizeof(linnerArray) / sizeof(linnerArray[0]);
   int k = 2; // Index of the element to be deleted

    deleteElement(linnerArray, size, k);
      for (int i = 0; i < size; ++i) {
        cout << linnerArray[i] << " ";
    }
    cout << endl;
    return 0;
}