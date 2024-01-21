#include <bits/stdc++.h>
using namespace std;

int binary_Search(int arr[], int n, int s_data) {
    int left, right, mid;
    left = 0;
    right = n - 1;
    int found=0;

    while (left <= right) {
        mid = (left + right) / 2;

        if (s_data == arr[mid]) {
             cout << "Data Found" <<"="<<mid+1<< " "<<arr[mid]<< endl;
             found=1;
            break;
        } else if (s_data > arr[mid]) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    if(found==0){
        cout << "Data Not Found" << endl;
    }
}

int main() {
    int n, s_data;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
   sort(arr,arr+n);
    cin >> s_data;

    binary_Search(arr, n, s_data);
    return 0;
}
