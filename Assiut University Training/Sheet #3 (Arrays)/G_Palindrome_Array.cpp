#include <iostream>
using namespace std;
 
int main() {
 int n;

    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

// n= 5
// 1 3 2 3 1

int found=0;
   for (int i = 0; i < n / 2; ++i) { // 5/2=2
        if (arr[i] != arr[n - 1 - i]) {// arr[0] != arr[5-1-0]
        found=1;
     
        }
    }
if(found==1){
      cout<<"NO"<<endl;
}else{
           cout<<"YES"<<endl;  
        }

 
    return 0;
}