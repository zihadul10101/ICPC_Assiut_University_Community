#include <iostream>
#include <climits>
using namespace std;

int main() {
    long long int testCase;
    cin >> testCase;

    while (testCase--) {
        long long truck;
        cin >> truck;
        long long boxArray[truck];

        for (int i = 0; i < truck; i++) {
            cin >> boxArray[i];
        }
 long long minVal = LLONG_MAX;
   long long maxVal = LLONG_MIN; 
        // Output the elements of the array
        for (int i = 0; i < truck; i++) {
            minVal = min(minVal, boxArray[i]);
            maxVal = max(maxVal, boxArray[i]);
        }

         cout << "Minimum: " <<minVal << endl;
         cout << "Maximum: " <<maxVal << endl;
        // long long ans=maxVal - minVal;
        //  if(150000<ans){
        // cout<<ans<<endl;
        //  }
     cout<<(maxVal - minVal)<<endl;
    }

    return 0;
}
