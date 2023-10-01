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

// Iteration | i | j | arr[i] | arr[j] | found | count | Comment
// -------------------------------------------------------------
//           1 | 0 |     |   1   |       |   0   |   0   | Checked if 1 + 1 exists
//           2 | 1 |     |   1   |       |   0   |   0   | Checked if 1 + 1 exists
//           3 | 2 |     |   3   |       |   0   |   0   | Checked if 3 + 1 exists
//           4 | 3 |     |   3   |       |   0   |   0   | Checked if 3 + 1 exists
//           5 | 4 |     |   5   |       |   0   |   0   | Checked if 5 + 1 exists
//           6 | 5 |     |   5   |       |   0   |   0   | Checked if 5 + 1 exists
//           7 | 6 |     |   7   |       |   0   |   0   | Checked if 7 + 1 exists
//           8 | 7 |     |   7   |       |   0   |   0   | Checked if 7 + 1 exists
// -------------------------------------------------------------
// Result: 0

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	int size;
// 	cin>>size;
// 	int arr[size];
// 	for(int i=0;i<size;i++){
// 		cin>>arr[i];
// 	}// arr [5,2,3,1,8]   size = 5
// 	sort(arr,arr+size);
// 	int temp = 0;
// 	int result = 0;
// 	int counter = 0;
// 	for(int i =0;i<size;i++){  // i = 4
// 	// 0 1 2 3 4 5
// 	// 1 1 2 2 4 5
// 		if(i == 0){
// 			temp = arr[i];
// 			result = 1;
// 		} else {
// 			if(temp == arr[i]){
// 				result++;
// 			} else if (temp+1 == arr[i]){
// 				counter += result; // c = 2;
// 				temp = arr[i];
// 				result = 1;
// 			} else {
// 				result = 1;
// 				temp = arr[i];
// 			}
// 		}
// 	}
// 	cout<<counter<<endl;
	
// }

