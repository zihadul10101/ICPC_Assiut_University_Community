// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     long long int num,max;
// 	cin>>num;
//     int arr[num];
//      for(int i=0;i<num;i++){
//         cin>>arr[i];
//         if(arr[0] < arr[i]){
//           arr[0] = arr[i];
//           }
    

//      }
//      cout<<arr[0]<<endl;
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;

int main() {
    int num, max;
    cin >> num;
    int arr[num];
    
    cin >> arr[0]; // Initialize max with the first input element
    max = arr[0];

    for(int i = 1; i < num; i++) { // Start from index 1
        cin >> arr[i];
        if(max < arr[i]) {
            max = arr[i];
        }
    }
    
    cout << max << endl;
    return 0;
}
