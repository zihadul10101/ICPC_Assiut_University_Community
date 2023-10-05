// #include<bits/stdc++.h>
// using namespace std;

// bool isPrime(int num) {
//     if (num <= 1) {
//         return false;
//     }
//     for (int i = 2; i * i <= num; ++i) {
//     // for (int i = 2; i<= num/2; ++i) {
//         if (num % i == 0) {
//             return false;
//         }
//     }
//     return true;
// }
// int main() {
//     int n;
//     cin >> n;

//     for (int i = 2; i <= n; ++i) {
//         if (isPrime(i)) {
//             cout << i << " ";
//         }
//     }
//     cout << endl;

//     return 0;
// }
// Finding prime numbers from 1 to 10:
// Number  Is Prime
// Checking if 2 is divisible by 2: Yes
// ---------------------------------------
// 2       Yes
// Checking if 3 is divisible by 2: No
// Checking if 3 is divisible by 3: Yes
// ---------------------------------------
// 3       Yes
// Checking if 4 is divisible by 2: Yes
// ---------------------------------------
// 4       No
// Checking if 5 is divisible by 2: No
// Checking if 5 is divisible by 3: No
// Checking if 5 is divisible by 4: No
// ---------------------------------------
// 5       Yes
// Checking if 6 is divisible by 2: Yes
// ---------------------------------------
// 6       No
// Checking if 7 is divisible by 2: No
// Checking if 7 is divisible by 3: No
// Checking if 7 is divisible by 4: No
// Checking if 7 is divisible by 5: No
// Checking if 7 is divisible by 6: No
// ---------------------------------------
// 7       Yes
// Checking if 8 is divisible by 2: Yes
// ---------------------------------------
// 8       No
// Checking if 9 is divisible by 2: No
// Checking if 9 is divisible by 3: Yes
// ---------------------------------------
// 9       No
// Checking if 10 is divisible by 2: Yes
// ---------------------------------------
// 10      No

#include<bits/stdc++.h>
using namespace std;
int prime(int num){
	int div= num/2; // 8     1 2 3 4  8
	for(int i=2;i<=div;i++){
		if(num % i == 0){
			return -1;
		}
	}
	return num;
}
int main()
{
	int counter;
	cin>>counter;
	for(int i=2;i<=counter;i++){
		int res = prime(i); // i  -1 
		if(res != -1){
			cout<<res<<" ";
		}
	}
	
}

