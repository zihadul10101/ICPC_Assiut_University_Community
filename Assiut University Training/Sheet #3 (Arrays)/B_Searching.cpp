#include <iostream>
using namespace std;

int main() {
  long long int n,x;
   bool found = false;
    cin >> n;
   int arr[n];

    for (int i = 0; i <n;i++) {
        cin>>arr[i];
      
    }
   cin>>x;
    for (int i = 0; i <n;i++) {
         if(x==arr[i]){
             found = true;
          cout<< i << endl;
           break;  // Exit the loop once the element is found
        }
      
    }
   if(!found){
  cout<< "-1" << endl;
   }
  

    return 0;
}
