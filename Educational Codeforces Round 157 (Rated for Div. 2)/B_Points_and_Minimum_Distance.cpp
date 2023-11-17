#include <bits/stdc++.h>
using namespace std;

int main() {
    int testcase;
    cin>>testcase;
    while(testcase--){
        int num;
        cin>>num;

       long long arr[100];
       for(int i=1;i<=num*2;i++){
           cin>>arr[i];
        //   cout<<"Output"<<arr[i]<<endl;
       }

 for (int i = 1; i <= num * 2; i += 4) {
            long long x1 = arr[i];
            long long y1 = arr[i + 1];
            long long x2 = arr[i + 2];
            long long y2 = arr[i + 3];
            
            long long result = abs(x1 - x2) + abs(y1 - y2);
            cout << "Output: " << result << endl;
            cout<<x2<<" "<<y2<<endl;
            cout<<x1<<" "<<y1<<endl;
         

            
        }

    }
        
       


    return 0;
}
