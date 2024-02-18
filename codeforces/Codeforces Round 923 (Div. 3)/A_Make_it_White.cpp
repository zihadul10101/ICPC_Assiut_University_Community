#include <iostream>
#include <climits>
using namespace std;

int main() {
    int testCase;
    cin >> testCase;//2
    while (testCase--) {//2-1
        int size;
        cin >> size;
        string line;
        cin >> line;
        int lineLength = line.length();

  
        int minPos = INT_MAX;
        int maxPos = INT_MIN;
      cout<<"Min"<<minPos<<endl;
      cout<<"Max"<<maxPos<<endl;
        for (int i = 0; i < lineLength; i++) {
            if (line[i] == 'B') {
           // cout<<"position of B"<<i<<endl;
                minPos = min(minPos, i);
                maxPos = max(maxPos, i);
            }
        }


        if (minPos != INT_MAX) {
            int res=maxPos- minPos;
            cout  << res+1 << endl;
         
        } 
    }
    return 0;
}
