// #include<iostream>
// using namespace std;
// int main ()
// {
//     int A[100], n, i, j, x;

//     cin >> n;

//     for (i = 0; i < n; i++)
//         cin >> A[i];    
//     for (i = 0; i < n; i++)
//     {
//         for (j = i + 1; j < n; j++)
//         {
//             if (A[i] < A[j])
//             {
//                 x = A[i];
//                 A[i] = A[j];
//                 A[j] = x;
//             }
//         }
//     }
//     cout << "Second largest number : " << A[1];
//     // cout << "\nSecond smallest number : " << A[n - 2];
//     return 0;
// }


// C++ program to find second largest element in an array 

#include <bits/stdc++.h> 
using namespace std; 

/* Function to print the second largest elements */
void print2largest(int arr[], int arr_size) 
{ 
	int i, first, second; 
	/* There should be atleast two elements */
	if (arr_size < 2) { 
		//printf(" Invalid Input "); 
		return; 
	} 
	// sort the array 
	sort(arr, arr + arr_size); 
	// start from second last element as the largest element 
	// is at last 
	for (i = arr_size - 2; i >= 0; i--) { 
		// if the element is not equal to largest element 
		if (arr[i] != arr[arr_size - 1]) { 
			//printf("The second largest element is %d\n",arr[i]);
            cout<<arr[i]<<endl; 
			return; 
		} 
	} 
	// printf("There is no second largest element\n"); 
} 

/* Driver program to test above function */
int main() 
{ 
	int n;
    cin>>n;
     int arr[n];
    for(int i=0;i<n;i++){
       
        cin>>arr[i];
   
    }
      print2largest(arr, n); 
	
	
	return 0; 
} 

// This code is contributed by Aditya Kumar (adityakumar129)

