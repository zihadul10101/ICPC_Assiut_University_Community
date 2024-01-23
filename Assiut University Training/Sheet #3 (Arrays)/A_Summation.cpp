#include <iostream>
using namespace std;

int main() {
  long long int n,sum=0;
    cin >> n;
   int arr[n];
  

    for (int i = 0; i <n;i++) {
        cin>>arr[i];
       sum +=arr[i];
    }
    cout<< abs(sum) << endl;

    return 0;
}
