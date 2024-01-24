// Reverse

// #include <bits/stdc++.h>
// using namespace std;

// int main() {

// int n;
// cin>>n;
// int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];   
//     }
//      for(int i=(n-1); i>=0; i--){
//            cout<<arr[i]<<" ";
//      } 
//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     const int size = 5;
//     int myArray[size] = {1, 2, 3, 4, 5};
//     // reverse(myArray, myArray + size);
//     // Manual reversal
//     for (int i = 0; i < size / 2; ++i) {
//         // Swap elements from the beginning and end of the array
//         int temp = myArray[i];
//         myArray[i] = myArray[size - i - 1];
//         myArray[size - i - 1] = temp;
//     }

//     // Print reversed array

//     for (int i = 0; i < size; ++i) {
//      cout << myArray[i] << " ";
     
//     }

//     return 0;
// }

// Iteration    myArray
// Initial      1 2 3 4 5 
// Iteration 1  5 2 3 4 1 
// Iteration 2  5 4 3 2 1 


// | Iteration | Original Array | Temp | After Swap   |
// |-----------|-----------------|------|--------------|
// | 1         | 1 2 3 4 5       | 1    | 5 2 3 4 1    |
// | 2         | 5 2 3 4 1       | 2    | 5 4 3 2 1    |
// | 3         | 5 4 3 2 1       | 3    | 5 4 3 2 1    |

