#include <iostream>


using namespace std;

int main() {
		int counter;
	cin>>counter; // 2
	while(counter--){ // 2 1 0
    int size;

    // Ask the user for the size of the array
    cin >> size;

   int arr[size];

    // Ask the user to enter the elements of the array
    cout<< size << endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    for (int start = 0; start < size; start++) {
        int maxElement = arr[start];
        int maxIndex = start;

        for (int end = start; end < size; end++) {
            if (arr[end] > maxElement) {
                maxElement = arr[end];
                maxIndex = end;
            }
            // Print the subarray with the largest element
        //    1 6 3 7 6 6 7 6 7 7
          //    1 6 6 7 6 6 7 3 7 7 3
        //[1] , [6] , [3] , [7] , [1,6] , [6,3],[3,7], [1,6,3] , [6,3,7] , [1,6,3,7]
        // 3 3 3 1 2 2 
            //    cout << "[";
            // for (int i = start; i <= end; i++) {

            //     cout << arr[i];

            //     if (i < end) {
            //         cout << ", ";
            //     }
            // }
            // 	  cout << "]" << endl;  
              cout<< maxElement<< " ";
		
        }
    }
	}
    return 0;
}