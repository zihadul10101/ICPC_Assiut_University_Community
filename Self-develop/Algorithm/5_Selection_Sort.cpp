#include <bits/stdc++.h>
using namespace std;

void selection_sort(int arr[], int n) { // arr= 9 13 15 11 2 size=5
    for(int i = 0; i < n-1; i++) {  //9 is sorted loop(5-1)=4
        //i=0 min=0
     int min=i;
     for(int j=i+1;j<n;j++){ //j=0+1 //arr = 13 15 11 2
        if(arr[j]<arr[min]){// 13<9
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
    int size;
    cin >> size;
    int arr[size];

    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    selection_sort(arr, size);

    // Print the sorted array
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}


