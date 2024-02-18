#include<bits/stdc++.h>
using namespace std;

int main() {
 long long int n, q, l, r;
  cin >> n >> q;
 long long int arr[n];  // Adjusted array size to n

  for (int i = 0; i < n; i++) {  // Start from 0-index
    cin >> arr[i];
  }

 long long int sum = 0;
  for (int i = 1; i <= q; i++) {
    cin >> l >> r;

    // Correct loop variable and indices
    for (int j = l - 1; j < r; j++) {  // Adjust index to 0-index
      sum += arr[j];
    }

    cout << sum << endl;
    sum = 0;  // Reset sum for the next query
  }

  return 0;
}
