#include <bits/stdc++.h>
using namespace std;


long long febo(int n) {
if(n==1) return 0;
if(n==2) return 1;
  
  return febo(n-1)+febo(n-2); 
}
int main(){
     int num;
    cin >>num;

   cout<<febo(num); 
}
// febo(10) = febo(9) + febo(8)
// febo(9) = febo(8) + febo(7)
// febo(8) = febo(7) + febo(6)
// febo(7) = febo(6) + febo(5)
// febo(6) = febo(5) + febo(4)
// febo(5) = febo(4) + febo(3)
// febo(4) = febo(3) + febo(2)
// febo(3) = febo(2) + febo(1)
// febo(2) = 1
// febo(1) = 0

// Now, the function will start returning values:
// febo(2) = 1
// febo(3) = febo(2) + febo(1) = 1 + 0 = 1
// febo(4) = febo(3) + febo(2) = 1 + 1 = 2
// febo(5) = febo(4) + febo(3) = 2 + 1 = 3
// febo(6) = febo(5) + febo(4) = 3 + 2 = 5
// febo(7) = febo(6) + febo(5) = 5 + 3 = 8
// febo(8) = febo(7) + febo(6) = 8 + 5 = 13
// febo(9) = febo(8) + febo(7) = 13 + 8 = 21
// febo(10) = febo(9) + febo(8) = 21 + 13 = 34
