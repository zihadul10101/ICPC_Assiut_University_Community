// #include <bits/stdc++.h>
// using namespace std;

// bool checkDigits(int N) {
//     // Base Case
//     if (N == 0) {
//         return true;
//     }

//     // Extract the last digit
//     int r = N % 10;

//     // Check if the current digit is 4 or 7
//     if ((r != 4 && r != 7) ) {
//         return false;
//     }

//     // Recursive call to next iteration
//     return checkDigits(N / 10);
// }

// // Driver Code
// int main() {
//     long long int N;
//     cin >> N;

//     if (checkDigits(N)) {
//         cout << "YES" << endl;
//     } else {
//         cout << "NO" << endl;
//     }

//     return 0;
// }


#include<iostream>
using namespace std;

int main(){
  long long n;
  cin>>n;
  int check = 0;
  int rem;
  while(n != 0){
    rem = n%10;
    n /= 10;
    if(rem == 7 || rem == 4){
      check++;
    }

  }
  if(check != 4 && check != 7){
    cout<<"NO";
  }
  else{
    cout<<"YES";
  }
  return 0;
}




// #include <iostream>

// using namespace std;

// int main()
// {
//     long long n;
//     cin >> n;
//     int count = 0;
//     while (n != 0)
//     {
//         if (n % 10 == 4 || n % 10 == 7)
//         {
//             count += 1;
//         }
//         n /= 10;
//     }
//     if (count == 4 || count == 7)
//     {
//         cout << "YES" << endl;
//     }
//     else
//     {
//         cout << "NO" << endl;
//     }
//     return 0;
// }