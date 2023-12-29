#include <bits/stdc++.h>
using namespace std;

int main() {
     
   long long n,k,index = 0,position;
     cin>>n>>k;
   int numbers[n]; 


      for(int i=1;i<=n;i+=2){
      numbers[index] = i;
        index++; 
      }
      for(int i=2;i<=n;i+=2){
      numbers[index] = i;
        index++;
      }
   position= numbers[k-1];
      // Print the combined array
    // for (int i = 0; i < index; ++i) {
    //     //cout << numbers[i] << " ";
    // }
   cout << position <<endl;
    return 0;
}

