#include <bits/stdc++.h>
using namespace std;

int main() {
       long long a, b,c;
    
      cin >> a >> b >> c;
     long long width=a/c;
      if(a%c>0){
       width++;
      }
      long long hight=b/c;
       if(b%c>0){
      hight++;
      }
    cout<<hight * width<<endl;
    return 0;
}
// test case
// 6 6 4 output 4
// Input: 6 6 4
// Calculations:
// width = ceil(6 / 4) = 2
// height = ceil(6 / 4) = 2
// Output: 4

// 1 1 1 output 1
// Input: 1 1 1
// Calculations:
// width = ceil(1 / 1) = 1
// height = ceil(1 / 1) = 1
// Output: 1

// 2 1 1 output 2
// Input: 2 1 1
// Calculations:
// width = ceil(2 / 1) = 2
// height = ceil(1 / 1) = 1
// Output: 2

// 1 2 1 output 2
// 2 2 1 output 4
