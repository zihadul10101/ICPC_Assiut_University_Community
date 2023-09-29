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
#include<bits/stdc++.h>
using namespace std;
int main(){
    int row,column;

    cin>>row>>column;
    int arr[row][column];
    for(int i=0;i<row;i++){  //i= 0 1
     for(int j=0;j<column;j++) // z=0 1
     {
// i=0 j=0 0 0
// i=0 j=1 0 1
// i=1 j=0 1 0
// i=1 j=1 1 1
cin>>arr[i][j];
     }
    }
    int search;
    cin>>search;
    int flag=0;

    for(int i=0;i<row;i++){  //i= 0 1
     for(int j=0;j<column;j++) // z=0 1
     {
        if(arr[i][j]== search){
             flag=1;
              break;
         }
     }
    }
    if(flag==1){
        cout<<"will not take number"<<endl;
    }
    else{
        cout<<"will take number"<<endl;
    }
}
