
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	int counter;
// 	cin>>counter; // 2
// 	while(counter--){ // 2 1 0
// 		int size;
// 		cin>>size;
// 		int arr[size];
// 		for(int i=0;i<size;i++){
// 			cin>>arr[i];
// 			cout<<arr[i]<<" ";
// 		}
// 		int i=0;
// 		int z = 0;
// 		int ma;
// 		while(true){       // [1,6,3,7]    // size = 4   4 - 1 = 3
// 			if(z == size - 1){
// 				break;
// 			}
// 			if(i == z){
// 				ma = max(arr[i],arr[i+1]);	// 6
// 			} else {
// 				ma = max(ma,arr[i+1]); // 6 3
// 			}
// 			cout<<ma<<" ";
// 			i++; // 1
// 			if(i == size - 1){
// 				z++;
// 				i=z;
// 			}
// 		}
// 		cout<<endl;
// 	}
// }

// #include <iostream>

// using namespace std;

// int main() {

// 	int counter;
// 	cin>>counter; // 2
// 	while(counter--){ 

	
//     int size;

//     // Ask the user for the size of the array
//     cout << "Enter the size of the array: ";
//     cin >> size;

//     int arr[size];

//     // Ask the user to enter the elements of the array
//     cout << "Enter " << size << " elements for the array:" << endl;
//     for (int i = 0; i < size; i++) {
//         cin >> arr[i];
//     }

//     // Iterate over all possible subarray lengths
//     for (int len = 1; len <= size; len++) {
//         // Iterate over all possible starting indices
//         for (int start = 0; start <= size - len; start++) {
//             // Print the subarray
//             cout << "[";
//             for (int i = start; i < start + len; i++) {
//                 cout << arr[i];
//                 if (i < start + len - 1) {
//                     cout << ", ";
//                 }
//             }
//             cout << "]" << endl;
//         }
//     }
// }
//     return 0;
// }

// #include <iostream>


// using namespace std;

// int main() {
// 		int counter;
// 	cin>>counter; // 2
// 	while(counter--){ // 2 1 0
//     int size;

//     // Ask the user for the size of the array
//     cin >> size;

//    int arr[size];

//     // Ask the user to enter the elements of the array
//     cout<< size << endl;
//     for (int i = 0; i < size; i++) {
//         cin >> arr[i];
//     }

//     for (int start = 0; start < size; start++) {
//         int maxElement = arr[start];
//         int maxIndex = start;

//         for (int end = start; end < size; end++) {
//             if (arr[end] > maxElement) {
//                 maxElement = arr[end];
//                 maxIndex = end;
//             }
//             // Print the subarray with the largest element
//         //    1 6 3 7 6 6 7 6 7 7
//           //    1 6 6 7 6 6 7 3 7 7 3
//         //[1] , [6] , [3] , [7] , [1,6] , [6,3],[3,7], [1,6,3] , [6,3,7] , [1,6,3,7]
//         // 3 3 3 1 2 2 
//             //    cout << "[";
//             // for (int i = start; i <= end; i++) {

//             //     cout << arr[i];

//             //     if (i < end) {
//             //         cout << ", ";
//             //     }
//             // }
//             // 	  cout << "]" << endl;  
//               cout<< maxElement<< " ";
		
//         }
//     }
// 	}
//     return 0;
// }


/* C++ code to generate all possible subarrays/subArrays
	Complexity- O(n^3) */
#include<bits/stdc++.h>
using namespace std;

// Prints all subarrays in arr[0..n-1]
void subArray(int arr[], int n)
{
	// Pick starting point
	for (int i=0; i <n; i++)
	{
	     int maxElement = arr[i];
        int maxIndex = i;
		// Pick ending point
		for (int j=i; j<n; j++)
		{
		   
            if (arr[j] > maxElement) {
                maxElement = arr[j];
                maxIndex = j;
            }
              cout<< maxElement<< " ";
			// Print subarray between current starting
			// and ending points
// 			for (int k=i; k<=j; k++)
// 				cout << arr[k] << " ";


		
		}
	}
}
//output
// 1 6 3 7 6 6 7 6 7 7
// 3 3 3 1 2 2 

// Driver program
int main()
{
    	int counter;
	cin>>counter; // 2
	while(counter--){ // 2 1 0
     int size;
     cin >> size;
     int arr[size];
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
	cout << endl;
	subArray(arr, size);
	}
	return 0;
}
