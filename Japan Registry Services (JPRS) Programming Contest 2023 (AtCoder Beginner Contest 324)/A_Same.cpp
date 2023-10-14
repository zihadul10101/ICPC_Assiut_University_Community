// C++ Program to implement
// the above approach
#include <bits/stdc++.h>
using namespace std;

bool areSame(int arr[], 
			int n)
{
int first = arr[0];

for (int i = 1; i < n; i++)
	if (arr[i] != first)
	return 0;
return 1;
}

// Driver code
int main()
{
  int size;
  cin>>size;
  int arr[size];
  for(int i=0;i<size;i++){
    cin>>arr[i];
   
}
  if (areSame(arr, size))
	cout << "Yes";
   else
	cout << "No"; 
}

// This code is contributed by gauravrajput1
