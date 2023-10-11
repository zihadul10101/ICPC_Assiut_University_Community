#include <bits/stdc++.h>
using namespace std;

int main() {
    int testCases;
    cin >> testCases;

    for (int j = 1; j <= testCases; j++) {
        long long N, p, q;
        cin >> N >> p >> q;
        int arr[N];
        for (int i = 0; i < N; i++) {
            cin >> arr[i];
        }
    int count = 0;
     sort(arr, arr + N);
        
       

          for (int z = 0; z < N; z++) {
            for (int x = z + 1; x < N; x++) {
            int result = (arr[x] + arr[z]);
                        //    cout<<"result"<<arr[x] <<"+" <<arr[z] << "="<< result << endl;

          
                if(result>=p && result<=q){
               //  cout<<"result"<<arr[x] <<"+" <<arr[z] << "="<< result << endl;
                // if(result>maxSum){
                //    maxSum = max(maxSum, result);
                // }
              count++;
            }
            
            
            }
        }

       cout << "Case " << j << ": " << count<< endl;
    }

    return 0;
}

// #include <iostream>
// #include <algorithm>

// using namespace std;

// // Function to count the number of pairs within the range [A, B]
// int countPairsWithinRange(int N, int A, int B, int P[]) {
//     int count = 0;
//     sort(P, P + N); // Sort the input sequence for efficient counting

//     // Iterate through the sequence
//     for (int i = 0; i < N; i++) {
//         for (int j = i + 1; j < N; j++) {
//             int pairSum = P[i] + P[j];

//             // Check if the pair sum is within the range [A, B]
//             if (A <= pairSum && pairSum <= B) {
//                 count++;
//             }
//         }
//     }

//     return count;
// }

// int main() {
//     int T;
//     cin >> T;

//     for (int caseNumber = 1; caseNumber <= T; caseNumber++) {
//         int N, A, B;
//         cin >> N >> A >> B;
//         int P[100000]; // Assuming the maximum possible value of N is 100,000

//         for (int i = 0; i < N; i++) {
//             cin >> P[i];
//         }

//         // Count the number of pairs within the range [A, B]
//         int result = countPairsWithinRange(N, A, B, P);

//         // Output the result for the current test case
//         cout << "Case " << caseNumber << ": " << result << endl;
//     }

//     return 0;
// }
