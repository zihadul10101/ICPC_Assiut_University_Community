#include<bits/stdc++.h>
using namespace std;
void slove(){
    char ch[10][10];
    for(int i=0;i<10;i++){
       for(int j=0;j<10;j++){
        cin>>ch[i][j];
       } 
    }
    // Count 'X' values in each ring
    vector<int> ringCounts(5, 0);
    for (int i = 0; i < 10; ++i) {
        for (int j = 0; j < 10; ++j) {
            int ring = min(min(i, 9 - i), min(j, 9 - j));
          // cout<<"Ring count"<<ringCounts[ring]<<ring<<endl;
            if (ch[i][j] == 'X') {
                ringCounts[ring]++;
            }
        }
    }

    // Print the counts for each ring
    // cout << "Ring Counts:\n";
    int sum=0;

    for (int i = 0; i < 5; ++i) {
        sum += ringCounts[i] * (i + 1);
      
    }
     // cout << "Ring " << ": " << sum << endl;
      cout << sum << endl;
}
int main(){
    int testCase;
    cin>>testCase;
    while(testCase--){
        slove();
    }
}