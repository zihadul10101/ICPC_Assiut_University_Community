#include <iostream>
using namespace std;

int main() {
  long long int n;

    cin >> n;
   int arr[n];

    for (int i = 0; i <n;i++) {
        cin>>arr[i];
      
    }

    for (int i = 0; i <n;i++) {
       if(arr[i]>0){
        arr[i]=1;
       }else if(arr[i]<0){
        arr[i]=2;
       }else{
        arr[i]=0;
       }
      cout<<arr[i]<<" ";
    }
 
  

    return 0;
}
