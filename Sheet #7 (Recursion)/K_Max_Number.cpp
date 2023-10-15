#include <bits/stdc++.h>
using namespace std;

int maxNumber(int arr[],int n)// arr(1 -3 5 4 -6), 5
{
 if (n == 1) return arr[0]; 
// we know that max(arr,arr+n)
    return max(arr[n-1], maxNumber(arr, n-1)); 

 
}
// | n   | arr[n-1] | maxNumber(arr, n-1) | Current Max | arr           |
// | --- | -------- | -------------------- | ----------- | ------------- |
// | 5   | -6       | 4                    | 4           | 1 -3 5 4 4   |
// | 4   | 4        | 5                    | 5           | 1 -3 5 5 4   |
// | 3   | 5        | 5                    | 5           | 1 -3 5 5 4   |
// | 2   | -3       | 1                    | 5           | 1 -3 5 1 4   |
// | 1   | 1        | 1                    | 5           | 1 -3 5 1 4   |


int main()
{
  int size;
  cin>>size;
  int arr[size];
  for(int i=0;i<size;i++){
    cin>>arr[i];
   
}
 cout<<maxNumber(arr, size);
	
}


