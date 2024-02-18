#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int testCase;
    cin >> testCase;
    
    while (testCase--) {
        long long int size;
        cin >> size;
        long long int arr[size];

        for (int i = 0; i < size; i++) {
            cin >> arr[i];
              
        }
          sort(arr, arr + size);
              
    
       
        long long int product = 1;
    

         for (int i = 0; i < size; i++) {
             arr[0]+=1;
             product *= arr[i];
            //cout<<"Array"<<" "<<arr[i]<<endl;
        }
      

         cout << product << endl; // Print the product multiplied by min
    }

    return 0;
}
