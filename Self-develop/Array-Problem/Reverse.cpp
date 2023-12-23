// // min,max,sum of elements,Reverse

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


#include <bits/stdc++.h>
//#include <algorithm> // for std::reverse
int main() {
    const int size = 5;
    int myArray[size] = {1, 2, 3, 4, 5};
    // std::reverse(myArray, myArray + size);
    // Manual reversal
    for (int i = 0; i < size / 2; ++i) {
        // Swap elements from the beginning and end of the array
        int temp = myArray[i];
        myArray[i] = myArray[size - i - 1];
        myArray[size - i - 1] = temp;
    }

    // Print reversed array
    for (int i = 0; i < size; ++i) {
     std::cout << myArray[i] << " ";
     //cout << myArray[i] << " ";
    }

    return 0;
}

