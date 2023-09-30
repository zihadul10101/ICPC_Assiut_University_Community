// #include <iostream>

// // Function to calculate the nth Fibonacci number
// unsigned long long fibonacci(int n) {
//     if (n <= 0) return 0;
//     if (n == 1) return 1;
//     unsigned long long a = 0, b = 1, c;
//     for (int i = 2; i <= n; i++) {
//         c = a + b;
//         a = b;
//         b = c;
//     }
//     return b;
// }

// int main() {
//     unsigned long long date; // Date (day of the month)
//     std::cout << "Enter a date (day of the month): ";
//     std::cin >> date;

//     int n = 0;
//     while (fibonacci(n) < date) {
//         n++;
//     }

//     if (fibonacci(n) == date) {
//         std::cout << "Fibonacci Day! " << date << " is the " << n << "th Fibonacci number." << std::endl;
//     } else {
//         std::cout << date << " is not a Fibonacci Day." << std::endl;
//     }

//     return 0;
// }
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int row,column;

//     cin>>row>>column;
//     int arr[row][column];
//     for(int i=0;i<row;i++){  //i= 0 1
//      for(int j=0;j<column;j++) // z=0 1
//      {
// // i=0 j=0 0 0
// // i=0 j=1 0 1
// // i=1 j=0 1 0
// // i=1 j=1 1 1
// cin>>arr[i][j];
//      }
//     }
//     int search;
//     cin>>search;
//     int flag=0;

//     for(int i=0;i<row;i++){  //i= 0 1
//      for(int j=0;j<column;j++) // z=0 1
//      {
//         if(arr[i][j]== search){
//              flag=1;
//               break;
//          }
//      }
//     }
//     if(flag==1){
//         cout<<"will not take number"<<endl;
//     }
//     else{
//         cout<<"will take number"<<endl;
//     }
// }
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int size;
//     cin>>size;
//     int arr[size][size];
//     // get input 
//     for(int i=0;i<size;i++){
//         for(int j=0;j<size;j++)
//         {
//             cin>>arr[i][j];
//         }
//     }
//  int sum1=0;
//   int sum2=0;   

//    for(int i=0;i<size;i++){
//         for(int j=0;j<size;j++)
//         {
//             // main diagonal
//              if (i == j){
//               sum1+=arr[i][j];
//              }
//               // Condition for secondary diagonal
//             if ((i + j) == (size - 1)){
//              sum2+=arr[i][j]; 
//             }
//         }
//     }
// //cout<<abs(sum1) + abs(sum2)<<endl;
// 	cout<<abs(sum1 - sum2)<<endl;

// }
#include <iostream>
using namespace std;

int main() {
    int size, num_elements;
    cin >> size >> num_elements;

    int input[size];
    int frequency[num_elements + 1] = {0}; // Initialize frequency array with 0

    // Reading input elements
    for (int i = 0; i < size; ++i) {
        cin >> input[i];
        // Increment frequency for the corresponding element
        frequency[input[i]]++;
    }

    // Print the frequency array
    for (int i = 1; i <= num_elements; ++i) {
        cout << frequency[i] << endl;
    }
    cout << endl;

    return 0;
}
