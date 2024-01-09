#include <bits/stdc++.h>
using namespace std;
#define yes "YES"
#define no "NO"

void solve(int n){
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int s=0,d=0,left=0,right=n-1;
    int taken=n;
    int turn=0;
    while(taken!=0){
     if(turn%2==0){
        // Sereja score
        if(arr[left]>arr[right]){
            s+=arr[left];
            left++;
        }else{
           s+=arr[right];
            right--;  
        }
     }else{
//Dima Score
      if(arr[left]>arr[right]){
            d+=arr[left];
            left++;
        }else{
           d+=arr[right];
            right--;  
        }
     }
     taken--;
     turn++;
    }
    cout<<s<<" "<<d<<endl;
      
}
int main() {
    int n;
    cin >> n;
        solve(n);
    return 0;
}


// void solve(int n){
//     int s[n/2], d[n/2];
//     int arr[n];
//     for(int i=0; i<n; i++){
//         cin >> arr[i];
//     }
//     sort(arr, arr+n);
//     int sIndex = 0, dIndex = 0;
//     for(int i=0; i<n; i++){
//         if (i % 2 == 0) {
//             s[sIndex++] = arr[i];
//         } 
//         else {
//             d[dIndex++] = arr[i];
//         }
//     } 
//     int Sereja=0,Dima=0; 
//     for(int i=0; i<dIndex; i++){
//         Dima+=d[i];  
//     }
//     for(int i=0; i<sIndex; i++){
//         Sereja+=s[i];
//     }
//          cout << Dima<<" "<< Sereja <<endl;
      
// }
