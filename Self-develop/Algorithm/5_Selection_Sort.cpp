#include <bits/stdc++.h>
using namespace std;

void selection_sort(int arr[], int n) { // arr=9 13 15 11 2 n=5
    for(int i = 0; i < n-1; i++) { 
        //i=0 min=0
     int min=i;
     for(int j=i+1;j<n;j++){ //j=0+1
        if(arr[j]<arr[min]){
               min=j;
           
         
        }
        if(min != i){// 4 != 0
            int temp=arr[i]; // temp=9
            arr[i]=arr[min]; // arr[i]=arr[min]=2
            arr[min]=temp;  // arr[min]=9
        }
     }
    }
}

int main() {
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    selection_sort(arr, n);

    // Print the sorted array
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}


