// #include <bits/stdc++.h>
// using namespace std;

// // long long SumNum(long long arr[],int n)// arr(1 -3 5 4 -6), 5
// // {
// //  if (n == 0) return 0; 
// //     int sum = arr[n-1] + SumNum(arr, n-1);
// //     return sum;

// // }
// // | n   | arr[n-1] | SumNum(arr, n-1) | sum | arr      |
// // | --- | -------- | ----------------- | --- | -------- |
// // | 4   | 7        | SumNum(arr, 3)   | 0   | 1 4 2 7  |
// // | 3   | 2        | SumNum(arr, 2)   | 0   | 1 4 2 7  |
// // | 2   | 4        | SumNum(arr, 1)   | 0   | 1 4 2 7  |
// // | 1   | 1        | 1                 | 1   | 1 4 2 7  |

// int size;
// long long SumNum(long long arr[]){
// 	// 5
// 	// 0 1 2 3 4
// 	// 5 4 3 2 1
// 	if(size == 0){
// 		return 0;
// 	}
// 	// 1 + 2 + 3 + 4 + 5 + 0
// 	return arr[--size] + SumNum(arr); // 0
// }
// int main()
// {
//   // int size;
//   cin>>size;
//   long long arr[size];
//   for(int i=0;i<size;i++){
//     cin>>arr[i];
   
// }
//  cout<<SumNum(arr);
	
// }

#include <bits/stdc++.h>
using namespace std;

long long calculateSuffixSum(int size, long long arr[]) {//5 ,3 , 1 8 2 10 3
    if (size == 0) {
        return 0;
    }
    return arr[size - 1] + calculateSuffixSum(size - 1,arr);
    // 3+10+2      // 2,last number=0,arr
}

int main() {
    int size;// 5 3
    cin >>size;

    long long arr[size];
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
        //1 8 2 10 3
    }

    long long result = calculateSuffixSum(size,arr);//5 ,3 , 1 8 2 10 3
    cout << result << endl;

    return 0;
}
