// Split an array into two equal Sum subarrays
#include <bits/stdc++.h>
using namespace std;
#define yes "YES"
#define no "NO"
int findSplitPoint(int arr[],int n){
  int leftSum=0;
 
  for(int i=0;i<n;i++){
    leftSum += arr[i];
   int rightSum = 0;
    for (int j = i+1 ; j < n ; j++ ){
        rightSum+=arr[j];
    } 
      //cout << "left Sum = " << leftSum << ", right Sum = " << rightSum << endl;
//       6
// 1 2 3 4 5 5
// left Sum = 1, right Sum = 19
// left Sum = 3, right Sum = 17
// left Sum = 6, right Sum = 14
// left Sum = 10, right Sum = 10
// split point index = 4
// left Sum = 15, right Sum = 5
// left Sum = 20, right Sum = 0
      // split point index 
        if (leftSum == rightSum) {
      return i+1;
    //  cout<<"split point index = "<<i+1<<endl;
        }
           
       
  }
 

}

// Prints two parts after finding split point using 
// findSplitPoint() 
void printTwoParts(int arr[], int n) 
{ 
    int splitPoint = findSplitPoint(arr, n); 

    if (splitPoint == -1 || splitPoint == n ) 
    { 
        cout << "Not Possible" <<endl; 
        return; 
    } 
    for (int i = 0; i < n; i++) 
    { 
        if(splitPoint == i){
        cout << endl; 
       
       
		} 
         cout<< "i"<<i<< arr[i] << " " ;
    } 
} 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
int n;
cin>>n;
   int arr[n];
for(int j=0;j<n;j++){
 
    cin >> arr[j];

}
 printTwoParts(arr, n);

    return 0;
}


// C++ program to split an array into Two 
// equal sum subarrays 
// #include<bits/stdc++.h> 
// using namespace std; 

// // Returns split point. If not possible, then 
// // return -1. 
// int findSplitPoint(int arr[], int n) 
// { 
// 	int leftSum = 0 ; 

// 	// traverse array element 
// 	for (int i = 0; i < n; i++) 
// 	{ 
// 		// add current element to left Sum 
// 		leftSum += arr[i] ; 

// 		// find sum of rest array elements (rightSum) 
// 		int rightSum = 0 ; 
// 		for (int j = i+1 ; j < n ; j++ ) 
// 			rightSum += arr[j] ; 

// 		// split point index 
// 		if (leftSum == rightSum) 
// 			return i+1 ; 
// 	} 

// 	// if it is not possible to split array into 
// 	// two parts 
// 	return -1; 
// } 

// // Prints two parts after finding split point using 
// // findSplitPoint() 
// void printTwoParts(int arr[], int n) 
// { 
// 	int splitPoint = findSplitPoint(arr, n); 

// 	if (splitPoint == -1 || splitPoint == n ) 
// 	{ 
// 		cout << "Not Possible" <<endl; 
// 		return; 
// 	} 
// 	for (int i = 0; i < n; i++) 
// 	{ 
// 		if(splitPoint == i) 
// 			cout << endl; 
// 		cout << arr[i] << " " ; 
// 	} 
// } 

// // driver program 
// int main() 
// { 
// 	int arr[] = {1 , 2 , 3 , 4 , 5 , 5 }; 
// 	int n = sizeof(arr)/sizeof(arr[0]); 
// 	printTwoParts(arr, n); 
// 	return 0; 
// } 
