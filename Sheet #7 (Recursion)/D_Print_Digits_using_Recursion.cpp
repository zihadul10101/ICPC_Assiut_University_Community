#include <bits/stdc++.h>
using namespace std;
int position=0;
void printDigit(string N) {
    // 123
    if(position==N.size()){
        return;
    }
     // Debug information
    // cout << "Step " << position + 1 << ": ";
    // for (int i = 0; i < N.size(); i++) {
    //     if (i == position) {
    //         cout << "[" << N[i] << "] ";
    //     } else {
    //         cout << N[i] << " ";
    //     }
    // }
    //     cout<<N[position]<<" ";
        //1 2 3
        position++;
        //0+1+1
      return  printDigit(N);
  
}
int main() {
    int testCase;
	cin>>testCase;
    while(testCase--){
        string num;
        cin>>num;
     
        printDigit(num);
           cout<<endl;
           position=0;
    }

}

// 2
// 123
// Step 1: [1] 2 3 1 Step 2: 1 [2] 3 2 Step 3: 1 2 [3] 3 
// 54321
// Step 1: [5] 4 3 2 1 5 Step 2: 5 [4] 3 2 1 4 Step 3: 5 4 [3] 2 1 3 Step 4: 5 4 3 [2] 1 2 Step 5: 5 4 3 2 [1] 1 