#include<bits/stdc++.h>
using namespace std;
int main(){
    int size;
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    } 
  
          int count = 0;
     for(int i=0;i<size;i++){
       bool found = false;
          // Check if arr[i] + 1 exists in the array
        for (int j = 0; j < size; j++) {
            if (arr[i] + 1 == arr[j]) {
                found = true;
                break;
            }
        }  
        if (found) {
            count++;
        }
     
    } 
    cout << count << endl;
    
}
// input
// 3
// 4 4 5

// Iteration | i | j | arr[i] | arr[j] | found | count | Comment
// -------------------------------------------------------------
//           1 | 0 |     |   4   |       |   1   |   1   | Checked if 4 + 1 exists
//           2 | 1 |     |   4   |       |   1   |   1   | Checked if 4 + 1 exists
//           3 | 2 |     |   5   |       |   1   |   2   | Checked if 5 + 1 exists
// -------------------------------------------------------------
// Result: 2


