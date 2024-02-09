#include<bits/stdc++.h>
using namespace std;

long long int gcd(long long int num1,long long int num2) {
   while(num1 != num2){
        if(num1>num2){
            num1=num1-num2;
        }else{
            num2=num2-num1;
        }
    }
    return num2;
}
// Function to find the GCD (Greatest Common Divisor) using Euclidean Algorithm
// int gcd(int a, int b) {
//     while (b != 0) {
//         int temp = b;
//         b = a % b;
//         a = temp;
//     }
//     return a;
// }
// Function to find the LCM (Least Common Multiple) using GCD
long long int lcm(long long int a,long long int b) {
    return (a * b) / gcd(a, b);
}

int main() {
  long long  int num1, num2;
    cin >> num1 >> num2;
    
  long long  int result_gcd = gcd(num1, num2);
  long long  int result_lcm = lcm(num1, num2);
    
    cout  << result_gcd <<" "<<result_lcm<< endl;
   


    return 0;
}
