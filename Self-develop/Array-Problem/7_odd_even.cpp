// #include <bits/stdc++.h>
// using namespace std;

// int main() {
     
//    long long n,k,index = 0,position;
//      cin>>n>>k;
//    int numbers[n]; 


//       for(int i=1;i<=n;i+=2){
//       numbers[index] = i;
//         index++; 
//       }
//       for(int i=2;i<=n;i+=2){
//       numbers[index] = i;
//         index++;
//       }
//  //  position= numbers[k-1];
//       // Print the combined array
//     for (int i = 0; i < index; ++i) {
//         cout << numbers[i] << " ";
//     }
//   // cout << position <<endl;
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n = 8;  // Assuming n is the size of nums array
    int nums[] = {7, 12, 9, 15, 19, 32, 56, 70};
      int flag=0;
    for (int i = 0; i < n; i++) {
        
        for (int j = 0; j < n; j++) {
          //cout<< i <<" " <<"num[i] ="<< nums[i] <<"num[j] =" <<j<< " " << nums[j]<<endl;
          if(nums[j]>nums[i]){
            flag++;
          } 
        
        }
          if (flag >= 2)
            cout << nums[i] << " ";
    }
   
    return 0;
}


